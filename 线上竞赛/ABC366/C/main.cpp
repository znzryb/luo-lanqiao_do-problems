#include <iostream>
#include <map>
using namespace std;
map <int,int> map_num;
int q,operate,x;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin>>q;
    while(q--) {
        cin>>operate;
        if(operate==1) {
            cin>>x;
            if(map_num.count(x))
                map_num[x]+=1;
            else
                map_num[x]=1;
        }else if(operate==2) {
            cin>>x;
            if(map_num[x]==1)
                map_num.erase(x);
            else
                map_num[x]-=1;
        }else if(operate==3) {
            cout<<map_num.size()<<endl;
        }
    }
    return 0;
}
// https://atcoder.jp/contests/abc366/submissions/56561831
// https://vjudge.net.cn/solution/53386864