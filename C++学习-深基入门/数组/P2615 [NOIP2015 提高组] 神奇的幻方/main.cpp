// https://www.luogu.com.cn/problem/P2615
// B3940 [GESP样题 四级] 填幻方 https://www.luogu.com.cn/problem/B3940 (双倍经验)
#include <cstdio>
#include <vector>
#include <cmath>
using namespace std;
int n;int Hsquare[41][41];
bool check_first_x(int k) {
    for(int i=1;i<=n;i++) {
        if (Hsquare[1][i]==k) {
            return true;
        }
    }
    return false;
}

bool check_last_y(int k) {
    for(int i=1;i<=n;i++) {
        if (Hsquare[i][n]==k) {
            return true;
        }
    }
    return false;
}

int main()
{

    scanf("%d",&n);
    int x1=ceil(n/2.0);
    Hsquare[1][x1]=1;
    int n2=n*n;
    int x_up=x1;int y_up=1;

    for (int k=2;k<=n2;k++) {
        bool check_1_x=check_first_x(k-1);
        bool check_n_y=check_last_y(k-1);
        if (check_1_x==true and check_n_y==false) {
            Hsquare[n][x_up+1]=k;
            x_up=x_up+1;
            y_up=n;
        }else if(check_1_x==false and check_n_y==true) {
            Hsquare[y_up-1][1]=k;
            y_up=y_up-1;
            x_up=1;
        }else if(check_1_x==true and check_n_y==true) {
            Hsquare[y_up+1][x_up]=k;
            y_up=y_up+1;
        }else if(check_1_x==false and check_n_y==false) {
            if (Hsquare[y_up-1][x_up+1]==0) {
                Hsquare[y_up-1][x_up+1]=k;
                y_up=y_up-1;
                x_up=x_up+1;
            }else {
                Hsquare[y_up+1][x_up]=k;
                y_up=y_up+1;
            }
        }
    }

    for (int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            printf("%d ",Hsquare[i][j]);
        }
        printf("\n");
    }
    return 0;
}
// AC https://www.luogu.com.cn/record/170838307
// AC https://www.luogu.com.cn/record/170838447