#include <iostream>
using namespace std;char a,b;char as[510],bs[510],res[520];
int main()
{
    ios::sync_with_stdio(false);
    cout.tie(0);cin.tie(0);
    for (int i=0;i<510;i++) {
        cin>>a;
        if (a!='\n' and a!='' ) {
            as[i]=a;
        }else {
            break;
        }
    }
    for (int i=0;i<510;i++) {
        cin>>b;
        if (b!='\n' and b!='') {
            bs[i]=b;
        }else {
            break;
        }
    }

    return 0;
}

