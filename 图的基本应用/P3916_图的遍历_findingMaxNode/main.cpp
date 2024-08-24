#include <iostream>
#include <vector>
#include <cstring>
#include <bitset>
#include <unordered_map>
// 反向建表
using namespace std;
const int maxnm=1e5+10;
int n,m,x,y,maxNode;
bitset<maxnm> vis;
// adajacency list
struct edge{
    vector<int> son;
}g[maxnm];
unordered_map<int,int> maxNodeMap;

void dfs(int x) {
    if(g[x].son.empty())
        return;
    else {
        for(auto ch:g[x].son) {
            if(!vis[ch])
                vis[ch]=true,maxNodeMap[ch]=maxNode,dfs(ch);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin>>n>>m;
    for(int i=0;i<m;i++) {
        cin>>x>>y;
        g[y].son.push_back(x);
    }
    for(int i=n;i>0;i--) {
        if(maxNodeMap.size()==n)
            break;
        maxNode=i;
        if(maxNodeMap[i]==0)
            maxNodeMap[i]=i;
        vis[i]=true;
        dfs(i);
    }
    for(int i=1;i<=n;i++) {
        cout<<maxNodeMap[i]<<" ";
    }
    return 0;
}
// 1 个点tle了 https://www.luogu.com.cn/record/174249602
// 使用bitset基本上常数优化已经到头了 https://www.luogu.com.cn/record/174256229
// 反向建边  https://www.luogu.com.cn/record/174300213