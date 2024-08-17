#include <iostream>
#include <cmath>
using namespace std;
int n,k,xx[25],cnt=0;
bool vis[25];

bool is_prime(int x) {
    for(int i=2;i<=sqrt(x);i++) {
        if(x%i==0) {
            return false;
        }
    }
    return true;
}
//  递归深度，即多少个
void dfs(int y,int summ,int index) {
    for(int i=index;i<n;i++) {
        if(vis[i])  // 访问过，continue
            continue;
        if(y+1==k) {
            if(is_prime(summ+xx[i])) {
                // cout<<summ+xx[i]<<endl;
                cnt+=1;
            }
        }else {
            vis[i]=true;
            dfs(y+1,summ+xx[i],i+1);
            vis[i]=false;
        }
    }
}

int main()
{
    cin>>n>>k;
    for(int i=0;i<n;i++) {
        cin>>xx[i];
    }
    dfs(0,0,0);
    cout<<cnt<<endl;
    return 0;
}
// AC https://www.luogu.com.cn/record/173223210