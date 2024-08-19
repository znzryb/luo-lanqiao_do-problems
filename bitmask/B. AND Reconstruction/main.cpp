
#include <iostream>
#include <cmath>
// https://codeforces.com/problemset/problem/1991/B
using namespace std;
const int maxn=1e5+10;
unsigned long long int t,n,bb[maxn],aa[maxn];
bool isbreak;
int main() {
    cin>>t;
    while (t--) {
        cin>>n;
        for(int i=1;i<n;i++) {
            cin>>bb[i];
        }
        // n==2时进行一个特判
        if(n==2) {
            cout<<bb[1]<<" "<<bb[1]<<endl;
            continue;
        }
        bb[0]=bb[n]=0;
        for(int i=1;i<=n;i++) {
            aa[i]=bb[i]|bb[i-1];
        }
        // 检验是否有解
        bool valid=true;
        for(int i=1;i<=n-1;i++) {
            if((aa[i]&aa[i+1])!=bb[i]) {
                cout<<-1<<endl;
                valid=false;
                break;
            }
        }
        if(!valid)
            continue;
        for(int i=1;i<=n;i++) {
            cout<<aa[i]<<" ";
        }
        cout<<endl;
    }
    // t=8999&802;
    // std::cout << t << std::endl;
    return 0;
}
// AC https://codeforces.com/contest/1991/submission/277126453