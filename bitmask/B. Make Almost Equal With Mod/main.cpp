// 这题就是如果2不满足，那么给的所有数要么都是奇数，要么都是偶数
#include <iostream>
#include <unordered_set>
#include <cmath>
using namespace std;
int t,n;unsigned long long int summ,aa[105],maxa=0;
unordered_set<unsigned long long int> diff;
int main()
{
    cin>>t;
    while(t--) {
        cin>>n;
        for(int i=1;i<=n;i++) {
            cin>>aa[i];
            maxa=max(aa[i],maxa);
        }
        for(unsigned long long int i=2;i<=maxa+1;i=i*2) {
            bool valid=true;
            diff={};
            for(int j=1;j<=n;j++) {
                diff.insert(aa[j]%i);
                if(diff.size()>2) {
                    valid=false;
                    break;
                }
            }
            if(valid && diff.size()==2) {
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}
// AC https://codeforces.com/contest/1909/submission/277139402