#include <cstdio>
#include <string>
using namespace std;
int m,n;int cnts[10];
int main()
{
    scanf("%d %d",&m,&n);
    for (int i=m;i<=n;i++) {
        string i_string=to_string(i);
        for (int j=0;j<=9;j++) {
            char j_char='0'+j;
            for (int k=0;k<=i_string.size();k++) {
                if (i_string[k]==j_char) {
                    cnts[j]+=1;
                }
            }
        }
    }
    for (int i=0;i<=9;i++) {
        printf("%d ",cnts[i]);
    }
    return 0;
}
// AC https://www.luogu.com.cn/record/170911615