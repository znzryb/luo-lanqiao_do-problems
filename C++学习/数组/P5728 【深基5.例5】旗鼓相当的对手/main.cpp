// #include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;
int n,a,b,c,summ,a1,b1,c1,summ1,ans;int score[1010][5];

bool check(int a,int b,int c,int summ,int a1,int b1,int c1,int summ1) {
    if ((abs(a-a1)<=5) and (abs(b-b1)<=5) and (abs(c-c1)<=5) and abs(summ-summ1)<=10) {
        return true;
    }else {
        return false;
    }
}

int main()
{
    scanf("%d",&n);
    for (int i=0;i<n;i++) {
        scanf("%d %d %d",&a,&b,&c);
        summ=a+b+c;
        score[i][0]=a;score[i][1]=b;score[i][2]=c;score[i][3]=summ;
    }
    ans=0;
    for (int i=0;i<n;i++) {
        a=score[i][0];b=score[i][1];c=score[i][2];summ=score[i][3];
        for (int j=i+1;j<n;j++) {
            a1=score[j][0];b1=score[j][1];c1=score[j][2];summ1=score[j][3];
            if (check(a,b,c,summ,a1,b1,c1,summ1)) {
                ans+=1;
            }
        }
    }
    printf("%d",ans);
    return 0;
}
// AC https://www.luogu.com.cn/record/170762346