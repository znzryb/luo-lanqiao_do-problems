// https://www.luogu.com.cn/problem/P5709
#include <iostream>
#include <math.h>
using namespace std;
int m,t;double s;
int main(){
    cin>>m>>t>>s;
    if (t==0){
        cout<<0;
    }else{
        if (ceil(s/t)>=m){
            cout<<0;
        }else{
            cout<<m-ceil(s/t);
        }
    }
}
// AC https://www.luogu.com.cn/record/169833386
// 小心被除数为0