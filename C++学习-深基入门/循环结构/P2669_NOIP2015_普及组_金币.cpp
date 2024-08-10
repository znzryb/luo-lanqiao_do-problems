#include <iostream>
using namespace std;
int k;
int main(){
    cin>>k;
    int range_=1,endd=1;int receive=1,summ=0;
    for (int i=1;i<=k;i++){
        if (i>endd){
            range_=range_+1;
            endd+=range_;
            receive=range_;
            summ+=receive;
        }else{
            summ+=receive;
        }
    }
    cout<<summ<<endl;
    return 0;
}
// AC https://www.luogu.com.cn/record/170071543