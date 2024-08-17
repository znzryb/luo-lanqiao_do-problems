#include <iostream>
using namespace std;
int a,b,c;
int main()
{
    cin>>a>>b>>c;
    if(b<c) {
        if(a<b or a>c) {
            cout<<"Yes";
        }else {
            cout<<"No";
        }
    }else {
        if(a>c && a<b) {
            cout<<"Yes";
        }else {
            cout<<"No";
        }
    }
    return 0;
}
// AC