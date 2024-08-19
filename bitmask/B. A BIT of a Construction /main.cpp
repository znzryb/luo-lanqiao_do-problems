#include <iostream>
// 2^n-1  就是2进制中含1最多的数
using namespace std;
unsigned long long int t,n,k,max1;
int main()
{
    cin>>t;
    while(t--) {
        cin>>n>>k;
        // 记得初始化
        max1=0;
        // cout<<n<<" "<<k<<" : ";
        if(n==1) {
            cout<<k<<endl;
            continue;
        }
        for(unsigned long long int i=1;i<k;i=i*2) {
            max1=i-1;
        }
        cout<<max1<<" ";
        for(int i=0;i<(n-2);i++) {
            cout<<0<<" ";
        }
        cout<<k-max1<<endl;
    }
    return 0;
}
// AC https://codeforces.com/problemset/submission/1957/277147625