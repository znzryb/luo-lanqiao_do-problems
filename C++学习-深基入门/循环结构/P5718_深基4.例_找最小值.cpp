#include <iostream>
using namespace std;
int a,minn,n;
int main(){
    minn=1001;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>a;
        minn=min(a,minn);
    }
    cout<<minn<<endl;
}
// AC https://www.luogu.com.cn/record/170029672