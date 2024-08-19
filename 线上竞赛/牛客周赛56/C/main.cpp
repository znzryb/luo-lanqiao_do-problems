#include <iostream>
using namespace std;
int t,a,b;const int amax=1e9+10;
int main()
{
    cin>>t;
    while(t--) {
        cin>>a;
        for(int i=1;i<=amax;i++) {
            b=i^a;
            if(b>0) {
                cout<<i<<" "<<b<<endl;
                break;
            }
        }
    }
    // a=74^4;
    // std::cout << a << std::endl;
    return 0;
}
