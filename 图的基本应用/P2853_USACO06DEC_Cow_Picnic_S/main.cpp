#include <iostream>
#include <vector>
#include <bitset>
using namespace std;
const int maxk=105;
unsigned int k,n,m,x,y,cnt,pasture,cntPas,ans;      // pasture
struct edge {
    vector<unsigned int> pa;
}g[1005];
bitset<1005> vis,isCow;
void dfs(unsigned int x){
    for(auto parent:g[x].pa) {
        if(!vis[parent]) {
            vis[parent]=true;
            if(isCow[parent]==true) {
                cnt+=1;
            }
            dfs(parent);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin>>k>>n>>m;
    for(int i=1;i<=k;i++) {
        cin>>pasture;
        isCow[pasture]=true;
    }
    cntPas=isCow.count();
    for(int i=0;i<m;i++) {
        cin>>x>>y;
        g[y].pa.push_back(x);
    }
    for(int i=1;i<=n;i++) {
        cnt=0;vis.reset();
        vis[i]=true;
        if(isCow[i])
            cnt+=1;
        dfs(i);
        // cout<<i<<" : "<<cnt<<endl;
        if(cnt==cntPas)
            ans+=1;
    }
    cout<<ans<<endl;
    return 0;
}
// AC  https://www.luogu.com.cn/record/175334367