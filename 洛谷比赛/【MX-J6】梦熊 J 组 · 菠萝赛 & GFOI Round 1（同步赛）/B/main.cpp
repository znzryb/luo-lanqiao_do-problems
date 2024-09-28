#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
ll T,n,k,d,oddCnt,evenCnt,A[15],sumA[15];
ll ans;
ll C(ll a, ll b)
{
    ll ans = 1;
    for (ll i = a; i > a - b; i--) ans *= i;
    for (ll i = b; i > 1; i--) ans /= i;
    return ans;
}

int main()
{
    cin>>T;
    for(int _=1;_<=T;_++) {
        cin>>n>>k>>d;
        ans=n;
        // if(n<=10) {
        //     A[1]=k,sumA[1]=k;
        //     for(int i=2;i<=n;i++) {
        //         A[i]=A[i-1]+k;
        //         sumA[i]
        //     }
        //     for
        //     continue;
        // }

        if(k%2==0 && d%2==1) {
            oddCnt=n/2;
            evenCnt= n%2==1 ? n/2+1:n/2;
        }else if(k%2==1 && d%2==1){
            oddCnt= n%2==1 ? n/2+1:n/2;
            evenCnt=n/2;
        }else if(k%2==1 && d%2==0) {
            oddCnt=n;
            evenCnt=0;
        }else if(k%2==0 && d%2==0) {
            evenCnt=n;
            oddCnt=0;
        }
        ans+=C(oddCnt,2)+C(evenCnt,2);
        cout<<ans<<endl;
    }
    return 0;
}
// 35 pts https://www.luogu.com.cn/record/178783151     后面两个条件不小心写成d了。
// AC https://www.luogu.com.cn/record/178784426