#include <iostream>
#include <cstdio>
using namespace std;
char c;bool b=true;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin.unsetf(ios::skipws);
    while(cin>>c and c!=EOF) {
        if (c=='"') {
                // cstyle ''
            if (b) {
                cout<<"``";
                b=false;
            }else {
                cout<<"''";
                b=true;
            }
        } else {
            cout<<c;
        }
    }
}
// AC https://vjudge.net.cn/solution/53351273

// #include <iostream>
// #include <cstdio>
// using namespace std;
// int c;bool b=true;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0);cout.tie(0);
//
//     while ((c=getchar())!=EOF)
//         if (c=='"') {
//             // cstyle ''
//             if (b) {
//                 cout<<"``";
//                 b=false;
//             }else {
//                 cout<<"''";
//                 b=true;
//             }
//         } else {
//             cout<<(char)c;
//         }
//     return 0;
// }
