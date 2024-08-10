#include <iostream>
#include <math.h>
using namespace std;
int a;
int main(){
    cin >> a;
    if (a%2==0 and (4<a and a<=12)){
        cout<<1<<" ";
    }else{
        cout<<0<<" ";
    }

    if (a%2==0 or (4<a and a<=12)){
        cout<<1<<" ";
    }else{
        cout<<0<<" ";
    }

    if (a%2==0 and (a<=4 and a>12)){
        cout<<1<<" ";
    }else if(a%2!=0 and (4<a and a<=12)){
        cout<<1<<" ";
    }else{
        cout<<0<<" ";
    }

    if (a%2==0 or (4<a and a<=12)){
        cout<<0<<" ";
    }else{
        cout<<1<<" ";
    }
}
// AC https://www.luogu.com.cn/record/169864747