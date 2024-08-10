#include <iostream>
#include <math.h>
using namespace std;
int year;
int main(){
    cin>>year;
    if (year%4==0 and year%100!=0){
        cout<<1;
    }else if(year%100==0 and year%400==0){
        cout<<1;
    }else{
        cout<<0;
    }
}