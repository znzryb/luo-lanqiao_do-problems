#include <iostream>
#include <algorithm>
using namespace std;
int n,t,a,minn,maxx;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin>>n>>t>>a;
    minn=min(t,a);
    maxx=max(t,a);
    if(minn+(n-a-t)>maxx) {
        cout<<"No";
    }else {
        cout<<"Yes";
    }
    return 0;
}
