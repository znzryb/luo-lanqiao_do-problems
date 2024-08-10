#include <iostream>
#include <cstdio>
#include <algorithm>
int n;char beginSquare[12][12];char endSquare[12][12];char a;
// 检查是否可以转90度解决
bool checkAction1() {
    for (int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if (beginSquare[i][j]!=endSquare[][]) {
                return false;
            }
        }
    }
}

int main()
{
    scanf("%d",&n);
    scanf("%c",&a);     // 避免读到换行符号
    for (int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            scanf("%c",&a);
            beginSquare[i][j]=a;
        }
        scanf("%c",&a);     // 避免读到换行符号
    }
    for (int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            scanf("%c",&a);
            endSquare[i][j]=a;
        }
        scanf("%c",&a);     // 避免读到换行符号
    }


    return 0;
}
