#include <iostream>
// #include <>
using namespace std;
int n,a,minn,maxx;  // int as[1010];

int main(){
    cin>>n;
    minn=10000;
    maxx=0;
    for (int i=0;i<n;i++){
        cin>>a;
        minn=min(minn,a);
        maxx=max(maxx,a);
    }
    cout<<(maxx-minn)<<endl;
}
// AC https://www.luogu.com.cn/record/170226290