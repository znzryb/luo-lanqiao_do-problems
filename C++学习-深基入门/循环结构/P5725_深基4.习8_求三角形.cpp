#include <stdio.h>
#include <math.h>
using namespace std;
int n;
int main(){
    scanf("%d",&n);
    // 先输出矩阵
    int n2=pow(n,2);
    for (int i=1;i<=n2;i++){
        if (i<10){
             if (i%n==0){
                printf("0%d\n",i);
             }else{
                printf("0%d",i);
             }
        }else{
            if (i%n==0){
                printf("%d\n",i);
             }else{
                printf("%d",i);
             }
        }
    }
    printf("\n");
    int needPrint=1;
    for (int i=1;i<=n;i++){
        printf("%*s",(n-i)*2,"");
        for(int j=0;j<i;j++){
            if(needPrint<10){
                printf("0%d",needPrint);
            }else{
                printf("%d",needPrint);
            }
            needPrint+=1;
        }
        printf("\n");
    }

    return 0;
}
// AC https://www.luogu.com.cn/record/170277871