#include <iostream>
#include <cstdio>
#include <algorithm>
#include <math.h>
#include <iomanip>
using namespace std;
int x,k_;double n;
int main(){
    cin>>n;
    for (int k=1;k<n;k++){
        x=ceil((n-21*52*k)/(52*7));
        k_=k;
        if (x<=100){
            break;
        }
    }
    cout<<x<<endl;
    cout<<k_<<endl;
}
// AC https://www.luogu.com.cn/record/170475197