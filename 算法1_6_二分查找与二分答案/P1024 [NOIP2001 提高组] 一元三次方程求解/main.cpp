#include <iostream>
#include <cmath>
#include <iomanip>
// #define eps=1e-4    // 宏
// 且根与根之差的绝对值<=1，就1个1个区间扫
using namespace std;
double a,b,c,d;double const eps=1e-4;

double f(double x) {
    return a*pow(x,3)+b*pow(x,2)+c*x+d;
}

double find(double L,double R) {
    while (abs(R-L)>eps) {
        double mid=(L+R)/2;
        if (f(mid)*f(R)<0)      // 说明答案在mid到R这段区间内
            L=mid;              // 故L要跑到mid这里来
        else
            R=mid;
    }
    return  (L+R)/2;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin>>a>>b>>c>>d;
    for(int i=-100;i<=100;i++) {
        double L=i,R=i+1;
        double fl=f(L),fr=f(R);
        if(abs(fl-0)<eps)           // 如果l是根，直接输出
            cout<<setprecision(2)<<fixed<<L<<" ";
        else if(abs(fr-0)<eps)      // 如果r是根，跳过，防止重复输出
            continue;
        else if (fl*fr>=0)
            continue;
        else
            cout<<setprecision(2)<<fixed<<find(L,R)<<" ";
    }
    return 0;
}

// P1024 [NOIP2001 提高组] 一元三次方程求解   实数二分，调试发现输出的是fl的值，实际应该输出L，输出要看清楚。
// 2个点TLE，结果发现是死循环while（R-L>eps），我写反了
// 改好之后不TLE，变WA了，哎
// while (abs(R-L)>eps) {.     哎，还是这个while，不等号写反了
// AC https://www.luogu.com.cn/record/171493658