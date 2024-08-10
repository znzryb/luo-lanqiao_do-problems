#include <iostream>
using namespace std;
int t;string s;char ch;
int main()
{
    ios::sync_with_stdio(false);
    cout.tie(0);cin.tie(0);
    cin>>t;
    for(int i=0;i<t;i++) {
        cin>>s;int cnt=0,ans=0;
        for(auto ch:s) {
            if(ch=='O') {
                cnt+=1;
                ans+=cnt;
            }else
                cnt=0;
        }
        cout<<ans<<endl;
    }
    return 0;
}
// AC https://vjudge.net.cn/solution/53341931
