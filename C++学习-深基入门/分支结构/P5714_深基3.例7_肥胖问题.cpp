#include <iostream>
#include <math.h>
double m,h,bmi;
using namespace std;
int main(){
    cin>>m>>h;
    bmi=m/pow(h,2);
    if (bmi<18.5){
        cout<<"Underweight";
    }else if(bmi>= 18.5 and bmi<24){
        cout<<"Normal";
    }else{
        cout<<bmi<<endl<<"Overweight"<<endl;
    }
}
// AC https://www.luogu.com.cn/record/169879079