#include <iostream>
using namespace std;
int k;
int main(){
    cin>>k;
    double sum=0,count=1;
    while (sum<=k){
        sum+=1/count;
        count+=1;
    }
    cout<<count-1<<endl;
    return 0;
}
// AC https://www.luogu.com.cn/record/170067706