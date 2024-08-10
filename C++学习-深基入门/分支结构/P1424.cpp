#include <iostream>
#include <math.h>
#include <iomanip>
#include <algorithm>
int x,n,ans,weekday;
using namespace std;
int main(){
    ans=0;
    cin>>x>>n;
    for (int i=0;i<n;i++){
        weekday=(x+i)%7;
        if (weekday!=0 and weekday!=6){
            ans+=250;
        }
    }
    cout<<ans;
}

// AC https://www.luogu.com.cn/record/169999649