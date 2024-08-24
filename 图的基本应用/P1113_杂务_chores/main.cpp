#include <iostream>
#include <vector>
#include <queue>
using namespace std;
const int maxn=10010;
//      放着这个点到达所需最短时间
int n,x,vis[maxn],inDegree[maxn],curr_i,max_t;
//                 存放点的入度
// 邻接表
struct edge {
    int len;
    vector<int> son;
}gSon[maxn];

queue<int> q;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++) {
        cin>>x;     // 无意义，只是把他读掉
        cin>>gSon[i].len;
        vis[i]=gSon[i].len;
        while(true) {
            cin>>x;
            if(x==0)
                break;
            gSon[x].son.push_back(i);
            inDegree[i]+=1;
        }
    }
    vis[1]=gSon[1].len;
    // bfs is shown below
    q.push(1);
    while (!q.empty()) {
        curr_i=q.front();
        q.pop();
        for(auto sonn:gSon[curr_i].son) {
            // 入度-1
            inDegree[sonn]-=1;
            vis[sonn]=max(vis[sonn],vis[curr_i]+gSon[sonn].len);
            if(inDegree[sonn]==0)
                q.push(sonn);
        }
    }
    for(int i=1;i<=n;i++) {
        max_t=max(vis[i],max_t);
    }
    cout<<max_t<<endl;
    return 0;
}

// 果不其然，只过了20% https://www.luogu.com.cn/record/174473805
// AC https://www.luogu.com.cn/record/174477707