#include <iostream>
#include <map>
using namespace std;
const int maxn=2e5+10;
long long int n,c,aa[maxn],ans;
map<long long int,int> ds;
int main()
{
    cin>>n>>c;
    for(int i=1;i<=n;i++) {
        cin>>aa[i];
        ds[aa[i]]++;
    }
    for(int i=1;i<=n;i++) {
        ans+=ds[aa[i]-c];
    }
    cout<<ans<<endl;
    return 0;
}
// https://www.luogu.com.cn/record/173575576