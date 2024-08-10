// https://www.luogu.com.cn/problem/P5706
#include <cstdio>
#include <iostream>
#include <iomanip>      //input output manipulate
using namespace std;

float a;int b;
int main()
{
    cin >> a; cin >> b;
    cout <<setprecision(3)<<fixed << a/b <<endl<<b*2<<endl;
}
