#include <iostream>
#include <queue>
#include <vector>
// shi
using namespace std;
const int modd=80112002,maxn=5010,maxm=500010;
int n,m,a,b,inDegree[maxn],curr_pred,outDegree[maxn];
long long int vis[maxn],maxFCnt;    // dp表
struct edge {
    vector<int> prey;   // predator
}gFC[maxn];
queue<int> q;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin>>n>>m;
    for(int i=0;i<m;i++) {
        cin>>a>>b;
        gFC[b].prey.push_back(a);   // b's prey -> a
        outDegree[b]+=1;
        inDegree[a]+=1;
    }
    for(int i=1;i<=n;i++) {
        if(inDegree[i]==0)
            q.push(i),vis[i]=1;
    }
    while (!q.empty()) {
        curr_pred=q.front();
        q.pop();
        for(auto preyy:gFC[curr_pred].prey) {
            inDegree[preyy]-=1;
            vis[preyy]=(vis[preyy]+vis[curr_pred])%modd;
            // cout<<preyy<<" : "<<vis[preyy]<<endl;
            if(inDegree[preyy]==0) {
                q.push(preyy);
            }
        }
    }
    for(int i=1;i<=n;i++) {
        if(outDegree[i]==0)
            maxFCnt+=vis[i];
    }
    maxFCnt=maxFCnt%modd;
    cout<<maxFCnt<<endl;
    return 0;
}
// AC https://www.luogu.com.cn/record/174542091