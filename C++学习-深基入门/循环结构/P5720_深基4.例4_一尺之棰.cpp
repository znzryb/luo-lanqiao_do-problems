#include <iostream>
#include <math.h>
int n;
using namespace std;

int main(){
    cin>>n;
    int count=1;    // 从第二天开始取半
    while (n>1){
        n=n/2;
        count+=1;
    }
    cout<<count<<endl;
    // cout<<ceil(log(n)/log(2)) ;
}
// AC https://www.luogu.com.cn/record/170038453