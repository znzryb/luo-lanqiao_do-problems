#include <iostream>
int a,b,c,d;
using namespace std;
int main()
{
    cin >>a>>b>>c>>d;
    if (d>=b) cout<< c-a << ' '<< d-b;
    else cout<<c-a-1<<' '<< d+60-b;
}
// AC https://www.luogu.com.cn/record/169797006
