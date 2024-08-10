#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int a,b,c,a_2,b_2,c_2;
int main(){
    cin>>a>>b>>c;
    // 冒泡排序
    if (a>b) swap(a,b);
    if (b>c) swap(b,c);
    if (a>b) swap(a,b);
    if (a+b>c){

        a_2=pow(a,2);b_2=pow(b,2);c_2=pow(c,2);

        if (a_2+b_2>c_2) {
            cout<<"Acute triangle"<<endl;
        }else if((a_2+b_2)==c_2){
            cout<<"Right triangle"<<endl;
        }else{
            cout<<"Obtuse triangle"<<endl;
        }

        if (a==b){
            cout<<"Isosceles triangle"<<endl;
        }
        if (a==b and b==c) cout<<"Equilateral triangle"<<endl;
    }else{
        cout<<"Not triangle"<<endl;
    }
}
// AC https://www.luogu.com.cn/record/169989421