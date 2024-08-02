#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int n,k,aCount,bCount;double a_sum,b_sum;
int main(){
    a_sum=0;b_sum=0;aCount=0;bCount=0;
    cin>>n>>k;
    for (int i=1;i<=n;i++){
        if (i%k==0){
            a_sum+=i;aCount+=1;
        }else{
            b_sum+=i;bCount+=1;
        }
    }
    cout<<setprecision(1)<<fixed<<a_sum/aCount<<" "<<setprecision(1)<<fixed<<b_sum/bCount<<endl;
}
// AC https://www.luogu.com.cn/record/170033153