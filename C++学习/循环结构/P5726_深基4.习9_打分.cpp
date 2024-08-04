#include <iostream>
#include <cstdio>
#include <algorithm>
#include <math.h>
#include <iomanip>
using namespace std;
int n,a,maxx,minn;double ans,summ;
int main(){
    summ=0;maxx=0;minn=11;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        summ+=a;
        minn=min(minn,a);
        maxx=max(maxx,a);
    }
    ans=(summ-minn-maxx)/(n-2);
    cout<<setprecision(2)<<fixed<<ans<<endl;
    return 0;
}

// AC https://www.luogu.com.cn/record/170473218