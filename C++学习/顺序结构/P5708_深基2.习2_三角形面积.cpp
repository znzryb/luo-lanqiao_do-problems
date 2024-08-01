#include <iostream>
#include <math.h>
#include <iomanip>

// double精度较高
double a,b,c;double S;double p;
using namespace std;
int main()
{
    cin >> a >> b >>c;
    p=(a+b+c)/2;
    S=pow(p*(p-a)*(p-b)*(p-c),0.5);
    cout<<setprecision(1)<<fixed<<S<<endl;
}