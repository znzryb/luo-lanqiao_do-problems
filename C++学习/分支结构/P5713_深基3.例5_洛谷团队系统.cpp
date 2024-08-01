// https://www.luogu.com.cn/problem/P5713
#include <iostream>
using namespace std;
int n;
int main(){
    cin>>n;
    if (n*5<=(n*3+11)){
        cout<<"Local";
    }else{
        cout<<"Luogu";
    }
}
// AC https://www.luogu.com.cn/record/169873451