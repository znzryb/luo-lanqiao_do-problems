#include <iostream>
#include <queue>
using namespace std;
const int maxn=1510;
const long long int minu=-2e9;
int n,m,u,v,w,ww[maxn][maxn],inDegree[maxn],curr_u;
long long int vis[maxn];
struct edge {
    vector<int> son;
}g[maxn];
queue<int> q;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++)
            ww[i][j]=minu;
    }
    for(int i=0;i<m;i++) {
        cin>>u>>v>>w;
        ww[u][v]=max(w,ww[u][v]);     // 边权值
        g[u].son.push_back(v);
        inDegree[v]+=1;
    }
    fill(&vis[0],&vis[n+1],minu);
    vis[1]=0;
    for(int i=2;i<=n;i++) {
        if(inDegree[i]==0) {
            for(auto sonn:g[i].son) {
                inDegree[sonn]-=1;
            }
        }
    }
    q.push(1);
    while(!q.empty()) {
        curr_u=q.front();
        q.pop();
        for(auto sonn:g[curr_u].son) {
            inDegree[sonn]-=1;
            if(inDegree[sonn]==0) {
                q.push(sonn);
            }
            vis[sonn]=max(vis[curr_u]+ww[curr_u][sonn],vis[sonn]);
        }
    }
    if(vis[n]==minu) {
        cout<<-1<<endl;
    }else {
        cout<<vis[n]<<endl;
    }
    return 0;
}
// 46 pts https://www.luogu.com.cn/record/175158799
// AC https://www.luogu.com.cn/record/175181032    6 这题还会有重边
// 前面错了一堆发现是没删调试
// u<v 说明1一定是入度为0的点
// hack 数据
// 6 5
// 1 3 -1
// 1 4 3
// 2 3 -1
// 3 6 2
// 3 5 -2