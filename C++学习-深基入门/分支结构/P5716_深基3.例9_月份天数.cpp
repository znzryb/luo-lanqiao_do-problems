#include <iostream>
using namespace std;
int year,month;
int a[12]={31,0,31,30,31,30,31,31,30,31,30,31};

int main(){
    cin>>year>>month;
    if (month!=2){
        cout<<a[month-1];
    }else{
        if (year%4==0 and year%100!=0){
            cout<<29;
        }else if(year%100==0 and year%400==0){
            cout<<29;
        }else{
            cout<<28;
        }   
    }
}
// AC https://www.luogu.com.cn/record/169930620