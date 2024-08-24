#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int n,m,x,y;
const int maxn=1e5+10,maxm=1e6+10;
bool vis[maxn],visb[maxn];
struct edge {
    int node;
    vector<int> neighbour;
}g[maxn];

void dfs(int x) {
    cout<<x<<" ";
    for(auto ch:g[x].neighbour) {
        if(!vis[ch])
            vis[ch]=true,dfs(ch);
    }
}
struct fromto {
    int from,to;
}ft[maxm];
void bfs(int x) {
    queue<int> q;
    q.push(x);
    while (!q.empty()) {
        x=q.front();
        q.pop();
        cout<<x<<" ";
        for(auto ch:g[x].neighbour) {
            if(!visb[ch])
                visb[ch]=true,q.push(ch);
        }
    }
}

bool cmp(fromto a,fromto b) {
    if(a.from!=b.from)  return a.from<b.from;
    if(a.to!=b.to) return a.to<b.to;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++) {
        g[i].node=i;
    }
    for(int i=0;i<m;i++) {
        cin>>ft[i].from>>ft[i].to;
    }
    sort(&ft[0],&ft[m],cmp);
    for(int i=0;i<m;i++) {
        x=ft[i].from;y=ft[i].to;
        g[x].neighbour.push_back(y);
    }
    // 记得要初始化vis数组
    vis[1]=true;
    dfs(1);
    cout<<endl;
    visb[1]=true;
    bfs(1);
    return 0;
}
// https://www.luogu.com.cn/record/174152267