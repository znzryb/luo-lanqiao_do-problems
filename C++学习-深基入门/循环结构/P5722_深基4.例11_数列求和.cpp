#include <iostream>
using namespace std;
int n,ans;
int main(){
    cin>>n;
    for (int i=1;i<=n;i++){
        ans+=i;
    }
    cout<<ans;
    return 0;
}
// AC https://www.luogu.com.cn/record/170073377