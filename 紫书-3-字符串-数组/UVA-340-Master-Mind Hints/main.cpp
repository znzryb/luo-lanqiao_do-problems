#include <iostream>
#include <map>
#include <set>
using namespace std;
int len,ans[1010],guess[1010],cnt=0,cnt1=0,cnt_same_position=0,cnt_occur=0;
map<int,bool> map_isConnect_i;

// 观察样例可以得出一个结论，当两个数字成为一对匹配后，这对匹配中的两个数各自不能再与其他数匹配

bool check(int x) {      // 判断该数是否在ans中出现过
    for(int i=0;i<len;i++) {
                            // 匹配过的数不能再匹配
        if (ans[i]==x and (map_isConnect_i.count(i)==0)) {
            map_isConnect_i[i]=false;
            return true;
        }
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    while(cin>>len and len !=0) {
        cnt+=1;
        cout<<"Game "<<cnt<<":"<<endl;
        cnt1=0;
        while(true) {
            if(cnt1==0) {
                for(int i=0;i<len;i++) {
                    cin>>ans[i];
                }
                cnt1=1;
            }else {
                for(int i=0;i<len;i++) {
                    cin>>guess[i];
                }
                if(guess[0]!=0) {
                    // 先判断多少数字位置正确
                    cnt_same_position=0;cnt_occur=0;    // 初始化
                    for(int i=0;i<len;i++) {
                        if (ans[i]==guess[i]) {
                            cnt_same_position+=1;
                            map_isConnect_i[i]=false;
                        }
                    }
                    for(int i=0;i<len;i++) {
                        if(guess[i]!=ans[i]) {
                            if(check(guess[i]))
                                cnt_occur+=1;
                        }
                    }
                    cout<<"    ("<<cnt_same_position<<","<<cnt_occur<<")"<<endl;
                    map_isConnect_i.clear();        // 初始化
                }else {        // 说明读到全0行，跳出循环
                    break;
                }
            }
        }
    }

    return 0;
}

// https://www.luogu.com/discuss/419496
// AC https://vjudge.net.cn/solution/53365649