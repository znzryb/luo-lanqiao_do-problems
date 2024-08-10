#include <iostream>
#include <algorithm>
#include <string>
#include <typeinfo>
using namespace std;
int a,b,c;string s;
char strr[3];
int main(){
    cin>>a>>b>>c;
    if (a>b) swap(a,b);
    if (b>c) swap(b,c);
    if (a>b) swap(a,b);
    cin>>s;

    // char ch[100];
    // for (int i=0;i < s.length();i++)
    //     ch[i] = s[i];

    // 两个字符“” 一个字符‘’
    for (int i=0;i<3;i++){
        if (s[i]=='A'){
            cout<<a<<" ";
        }else if(s[i]=='B'){
            cout<<b<<" ";
        }else{
            cout<<c<<" ";
        }
    }
    return 0;
}
// AC https://www.luogu.com.cn/record/170004990