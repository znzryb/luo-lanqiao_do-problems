#include <iostream>
#include <math.h>
using namespace std;
int a,b,d;double c;
int main()
{
    cin >> a >>b;
    c=a+0.1*b;
    d=floor(c/1.9);
    cout << d;
    return 0;
}
// AC https://www.luogu.com.cn/record/169797308