# include <iostream>
using namespace std;
int n,ans,element;
int main(){
    ans=0;
    cin.tie(0)->sync_with_stdio(0);
    cout.flush();
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>element;
        ans+=element;
    }
    cout<<ans;
    return 0;
}

// 75% 无优化 https://www.luogu.com.cn/record/170023238
// 75% 优化后第四个点还是超了，但前面几个点快了很多 https://www.luogu.com.cn/record/170024186