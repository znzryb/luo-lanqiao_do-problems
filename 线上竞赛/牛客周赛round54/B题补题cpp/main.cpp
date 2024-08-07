#include <iostream>
#include <cstdio>
#include <math.h>
#include <algorithm>
using namespace std;
long long int a,b,x;long long int ans1,ans2,ans;
int main(){
    scanf("%lld %lld %lld",&a,&b,&x);
    if (3*a>=b){
        int remain=x%3;
        ans1=remain*a+floor(x/3.0)*b;
        ans2=ceil(x/3.0)*b;
        ans=min(ans1,ans2);
        printf("%lld",ans);
    }else{
        ans=x*a;
        printf("%lld",ans);
    }
    return 0;
}
// 最终通过85%，不知道再怎么提了，逻辑应该没问题，py过了