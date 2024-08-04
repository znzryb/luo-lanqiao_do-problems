#include <iostream>
#include <cstdio>
#include <algorithm>
#include <math.h>
using namespace std;
int n,a,ans;int as[100100];
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        as[i]=a;
    }
    if (n==1){
        printf("0");
    }

    if (n==2){
        if (as[0]!=as[1]){
            printf("1");
        }else{
            printf("0");
        }
    }
    if (n>=3){
        printf("0");
    }
    return 0;
}