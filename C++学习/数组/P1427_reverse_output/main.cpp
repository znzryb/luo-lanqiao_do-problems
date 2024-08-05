//
// Created by zz y on 2024/8/4.
//command+1
#include <cstdio>
#include <cmath>
using namespace std;
long long int a;long long int ass[101];int n_;
int main() {
    for (int i=0;i<101;i++) {
        scanf("%lld",&a);       // 记得加&
        if (a==0) {
            n_=i;
            break;
        }
        ass[i]=a;
    }
    for (int i=n_-1;i>=0;i--) {
        a=ass[i];
        printf("%lld ",a);
    }
    return 0;
}
// https://www.luogu.com.cn/record/170685356