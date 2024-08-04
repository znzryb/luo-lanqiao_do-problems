#include <cstdio>
#include <math.h>
#include <iostream>
using namespace std;
int a,summ_remain,remain,summ_in;int as[13];
int main(){
    for(int i=0;i<12;i++){
        scanf("%d",&a);
        as[i]=a;
    }

    summ_remain=0;
    for(int i=0;i<12;i++){
        a=as[i];
        if (a<=300){
            remain=(300-a);
            summ_remain+=remain;
            summ_in+=floor(summ_remain/100.0)*100;
            summ_remain-=floor(summ_remain/100.0)*100;
        }
        if (a>300){
            if ((a-300)>summ_remain){
                printf("-%d",i+1);
                return 0;
            }else{
                summ_remain-=(a-300);
            }
        }
    }
    long int ans=floor(summ_remain+summ_in*1.2);
    cout<<ans;
    return 0;
}
// https://www.luogu.com.cn/record/170505394