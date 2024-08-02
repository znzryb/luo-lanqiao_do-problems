// https://www.luogu.com.cn/problem/P1888
#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;
int a,b,c,max_div;
int gcd(int a, int b){
    if (b==0){
        return a;
    }
    return gcd(b,a%b);
}
int main(){
    cin>>a>>b>>c;
    if(a>b) swap(a,b);
    if(b>c) swap(b,c);
    if(a>b) swap(a,b);
    max_div=gcd(a,c);
    cout<<a/max_div<<"/"<<c/max_div;
}
// AC https://www.luogu.com.cn/record/170002006