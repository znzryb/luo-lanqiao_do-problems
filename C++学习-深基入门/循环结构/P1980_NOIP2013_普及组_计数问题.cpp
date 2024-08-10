#include <iostream>
// #include <string.h>
using namespace std;
int n,ans;char needCount;
int main(){
    cin>>n>>needCount;
    ans=0;
    for (int i=1;i<=n;i++){
        string i_string=to_string(i);
        for (int j=0;j<i_string.size();j++){
            // int res=needCount.compare(i_string[i])
            if (needCount==i_string[j]) ans+=1;
        }
    }
    cout<<ans<<endl;
    return 0;
}
//  AC https://www.luogu.com.cn/record/170062139
// char 和 string 不同， 不能互相比较。