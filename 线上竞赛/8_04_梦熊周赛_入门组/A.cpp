#include <iostream>
#include <cstdio>
#include <algorithm>
#include <math.h>
using namespace std;
int a,b,c,d;
int main(){
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if ((a+b+c)==d){
        printf("Yes");
        return 0;
    }else if((a+b-c)==d){
        printf("Yes");
        return 0;
    }else if((a+b)*c==d){
        printf("Yes");
        return 0;
    }else if((a-b+c)==d){
        printf("Yes");
        return 0;
    }else if((a-b-c)==d){
        printf("Yes");
        return 0;
    }else if((a-b)*c==d){
        printf("Yes");
        return 0;
    }else if((a*b)*c==d){
        printf("Yes");
        return 0;
    }else if(((a*b)+c)==d){
        printf("Yes");
        return 0;
    }else if(((a*b)-c)==d){
        printf("Yes");
        return 0;
    }

    printf("No");
    return 0;
}
// AC https://www.luogu.com.cn/record/170479649