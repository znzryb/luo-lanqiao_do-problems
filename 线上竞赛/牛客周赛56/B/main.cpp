#include <iostream>
#include <cmath>
using namespace std;
const int maxn=1e5+10;
long long int n,m,k,a,summ=0,summ1;
int main()
{
    cin>>n>>m>>k;
    for(int i=0;i<n;i++) {
        cin>>a;
        summ+=a;
    }
    summ=summ/k;
    if(summ>=m+1) {
        cout<<m+1;
    }else {
        cout<<summ;
    }
    return 0;
}
