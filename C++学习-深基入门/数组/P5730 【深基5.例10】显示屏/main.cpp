#include <cstdio>
#include <string>
// XXX...X.XXX.XXX.X.X.XXX.XXX.XXX.XXX.XXX
// X.X...X...X...X.X.X.X...X.....X.X.X.X.X
// X.X...X.XXX.XXX.XXX.XXX.XXX...X.XXX.XXX
// X.X...X.X.....X...X...X.X.X...X.X.X...X
// XXX...X.XXX.XXX...X.XXX.XXX...X.XXX.XXX
using namespace std;
int n;int number[110];char a;
string first_row[10]={"XXX","..X","XXX","XXX","X.X","XXX","XXX","XXX","XXX","XXX"};
string secon_row[10]={"X.X","..X","..X","..X","X.X","X..","X..","..X","X.X","X.X"};
string third_row[10]={"X.X","..X","XXX","XXX","XXX","XXX","XXX","..X","XXX","XXX"};
string forth_row[10]={"X.X","..X","X..","..X","..X","..X","X.X","..X","X.X","..X"};
string fifth_row[10]={"XXX","..X","XXX","XXX","..X","XXX","XXX","..X","XXX","XXX"};
int main()
{

    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++) {
        a=getchar();        // 这样会读到换行符
        int value=a-'0';
        number[i]=value;          //static_cast<int>(a)-static_cast<int>('0');
    }
    for (int i=0;i<5;i++) {
        for(int j=0;j<n;j++) {
            if(i==0) {
                int num=number[j];
                if (j==n-1) {
                    printf("%s",first_row[num].c_str());
                }else {
                    printf("%s.",first_row[num].c_str());
                }
            }else if(i==1) {
                int num=number[j];
                if (j==n-1) {
                    printf("%s",secon_row[num].c_str());
                }else {
                    printf("%s.",secon_row[num].c_str());
                }
            } else if(i==2) {
                int num=number[j];
                if (j==n-1) {
                    printf("%s",third_row[num].c_str());
                }else {
                    printf("%s.",third_row[num].c_str());
                }
            }else if(i==3) {
                int num=number[j];
                if (j==n-1) {
                    printf("%s",forth_row[num].c_str());
                }else {
                    printf("%s.",forth_row[num].c_str());
                }
            } else if(i==4) {
                int num=number[j];
                if (j==n-1) {
                    printf("%s",fifth_row[num].c_str());
                }else {
                    printf("%s.",fifth_row[num].c_str());
                }
            }
        }
        printf("\n");
    }
    return 0;
}
// 转成python后的AC记录 https://www.luogu.com.cn/record/170902940