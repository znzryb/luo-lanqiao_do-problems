#include <iostream>
#include <cstdio>
#include <math.h>
#include <algorithm>
using namespace std;
int n,m,a;int as[100010];int left,right;
int main(){
    scanf("%d %d",&n,&m);
    for (int i=0;i<n;i++){
        scanf("%d",a);
        as[i]=a;
    }
    sort(begin(as),end(as));
    for (int i=1;i<=m;i++){
        left=lower_bound(begin(as),end(as),i);
        right=upper_bound(begin(as),end(as),i);
        cout<<right-left<<endl;
    }
    return 0;
}