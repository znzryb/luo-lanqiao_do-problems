// https://www.luogu.com.cn/problem/P2661
// dfs加剪枝优化（即遍历过的点不再遍历）（因为所有点都得进入一遍）
#include <iostream>
#include <bitset>
#include <unordered_set>
using namespace std;
const int maxn=2e5+10;
int n,son[maxn],minCircle=maxn,cntx[maxn],cntIsSearched;
bitset<maxn> vis;
unordered_set<int> curr_vis;
void dfs(int x,int cnt) {
    if(!vis[x]) {
        if(curr_vis.find(x)!=end(curr_vis)) {
            minCircle=min(minCircle,cnt-cntx[x]);
            return;
        }
        cntx[x]=cnt;
        curr_vis.insert(x);
        dfs(son[x],cnt+1);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++) {
        cin>>son[i];
    }
    for(int i=1;i<=n;i++) {
        curr_vis={};
        dfs(i,1);
        if(cntIsSearched==n)
            break;
        for(auto ch:curr_vis) {
            vis[ch]=true;
            cntIsSearched+=1;
        }
    }
    cout<<minCircle<<endl;
    return 0;
}
// 90% #2TLE https://www.luogu.com.cn/record/174720497