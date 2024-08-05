#include <iostream>
#include <cstdio>
int n,m,x11,y11,x22,y22;int blockList[1010][1010];
int main()
{
    scanf("%d %d",&n,&m);
    for (int i=0;i<m;i++) {
        scanf("%d %d %d %d",&x11,&y11,&x22,&y22);
        for (int i=x11;i<=x22;i++) {
            for (int j=y11;j<=y22;j++) {
                blockList[i][j]+=1;
            }
        }
    }
    for (int i=1;i<=n;i++) {
        if (i!=1) printf("\n");
        for (int j=1;j<=n;j++) {
            printf("%d ",blockList[i][j]);
        }
    }
    return 0;
}
// AC https://www.luogu.com.cn/record/170770038