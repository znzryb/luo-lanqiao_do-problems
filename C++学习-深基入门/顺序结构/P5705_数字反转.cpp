// https://www.luogu.com.cn/problem/P5705
// #include <iostream>
// https://www.runoob.com/cprogramming/c-function-scanf.html  (scanf教程)
#include <cstdio>
using namespace std;
char a,b,c,d;

int main()
{
    scanf("%c%c%c.%c",&a,&b,&c,&d);
    printf("%c.%c%c%c",d,c,b,a);
    return 0;
}