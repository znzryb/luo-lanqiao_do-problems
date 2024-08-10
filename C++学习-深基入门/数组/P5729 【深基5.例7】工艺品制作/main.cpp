#include <iostream>
#include <cstdio>
int w,x,h,q,x11,y11,z11,x22,y22,z22,cnt;
bool cubic[22][22][22];
int main()
{
    scanf("%d %d %d",&w,&x,&h);
    scanf("%d",&q);
    cnt=0;
    for (int i=0;i<q;i++) {
        scanf("%d %d %d %d %d %d",&x11,&y11,&z11,&x22,&y22,&z22);
        for (int i=x11;i<=x22;i++) {
            for (int j=y11;j<=y22;j++) {
                for(int k=z11;k<=z22;k++) {
                    if (cubic[i][j][k]==false) {
                        cubic[i][j][k]=true;
                        cnt+=1;
                    }
                }
            }
        }
    }
    printf("%d",w*x*h-cnt);
    return 0;
}
// AC https://www.luogu.com.cn/record/170795115