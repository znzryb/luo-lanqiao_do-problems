#include <iostream>
#include <math.h>
using namespace std;
double h,r;double v;
int main()
{
    cin >> h >> r;
    v=(h/10)*3.14*pow(r/10,2);
    cout << ceil(20/v) << endl;
    return 0;
}

// AC https://www.luogu.com.cn/record/169796627