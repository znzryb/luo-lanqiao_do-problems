#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int n;double ans;
int main(){
    cin>>n;
    ans=(pow(((1+sqrt(5))/2),n)-pow((1-sqrt(5))/2,n))/sqrt(5);
    cout<<setprecision(2)<<fixed<<ans<<endl;
    return 0;
}

// AC https://www.luogu.com.cn/record/170224684