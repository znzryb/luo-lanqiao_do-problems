#include <iostream>
using namespace std;
string s;// int needOuts[12];
int main(){
    cout.tie(0)->sync_with_stdio(0);
    cout.flush();
    cin>>s;
    //  考虑单个数字
    if ((s.size()==1) or (s.size()==2 and s[0]==-1)){
        cout<<s;
        return 0;
    }

    bool judgePrint0=true;
    // 没有考虑单个数字
    if (s[0]=='-'){
        cout<<"-";
        for (int i=s.size()-1;i>=1;i--){
            if (judgePrint0 and s[i]=='0'){
                continue;
            }
            cout<<s[i];
            judgePrint0=false;
        }
    }else{
        for (int i=s.size()-1;i>=0;i--){
            if (judgePrint0 and s[i]=='0'){
                continue;
            }
            cout<<s[i];
            judgePrint0=false;
        }
    }
    return 0;
}
// 90000 要输出9
// AC https://www.luogu.com.cn/record/170222548