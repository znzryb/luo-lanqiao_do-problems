#include <iostream>
#include <algorithm>
using namespace std;
int a,ability,ans,height;
int list_apple_h[10];

int main(){
    ans=0;
    for (int i=0;i<10;i++){
        cin>>a;
        list_apple_h[i]=a;
    }
    cin>>ability;
    for (int i=0;i<10;i++){
        height=list_apple_h[i];
        if (height<=(ability+30)) ans+=1;
    }
    cout<<ans;
}
// AC https://www.luogu.com.cn/record/170002967