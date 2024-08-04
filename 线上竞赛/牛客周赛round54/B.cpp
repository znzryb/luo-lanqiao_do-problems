#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;
int a,b,x;long long int ans1,ans2,ans;
int main(){
    scanf("%d %d %d",&a,&b,&x);
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

// https://ac.nowcoder.com/acm/contest/87303/B
// py已经AC