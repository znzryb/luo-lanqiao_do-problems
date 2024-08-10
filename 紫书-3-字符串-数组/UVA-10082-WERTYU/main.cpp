#include <iostream>
#include <string.h>
using namespace std;
//                                     是特殊字符，需要转义
char c;char s[]="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";  // 隐式类型转换
int main()
{
    cin.unsetf(ios::skipws);
    while(cin>>c and c!=EOF) {
        bool whetherOut=false;
        for(int i=0;s[i];i++) {
            if(s[i]==c) {
                whetherOut=true;
                cout<<s[i-1];
            }
        }
        if(whetherOut==false) {
            cout<<c;
        }
    }
    return 0;
}
// AC https://vjudge.net.cn/solution/53353572
