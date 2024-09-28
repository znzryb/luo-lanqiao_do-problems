// https://www.luogu.com.cn/problem/T513290?contestId=198975
#include <iostream>
#include <cmath>
#include <bitset>
using namespace std;
typedef long long ll;
ll n,m,T;
bool isFind=false;
//bitset<107> vis;
ll gcd(ll a,ll b) {
    if(b==0) return a;
    return gcd(b,a%b);
}
void dfs(ll x,ll cnt) {
    for(ll i=x;i>=2;i--) {
        if(x%i!=0)
            continue;
        if(x*i<=m && !isFind) {
            if(x*i==m) {
                cout<<cnt+1<<endl;
                isFind=true;
                return;
            }
            dfs(x*i,cnt+1);
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin>>T;
    for(ll _=1;_<=T;_++) {
        cin>>n>>m;
        if(n==m) {
            cout<<0<<endl;
            continue;
        }
        if(n>m) {
            cout<<-1<<endl;
            continue;
        }
        if(m%n!=0) {
            cout<<-1<<endl;
            continue;
        }
        if(n==1) {
            cout<<-1<<endl;
            continue;
        }
        if(n==2) {
            if(m==6) {
                cout<<-1<<endl;
                continue;
            }
            // ll mod=0;
            // mod=pow(2,floor(log2(m)));
            // if(m%mod==0) {
            //     cout<<ceil(log2(m))<<endl;
            // }else {
            //     cout<<-1<<endl;
            // }
            // continue;
        }
        dfs(n,0);
        if(!isFind)
            cout<<-1<<endl;
        isFind=false;
        // while(m%n==0) {
        //     m=m/n;
        //     cnt++;
        // }
        // if(m>n) {
        //     cout<<-1<<endl;
        // }else {
        //     cout<<cnt<<endl;
        // }
    }
    // cout<<gcd(900,160);
    return 0;
}
