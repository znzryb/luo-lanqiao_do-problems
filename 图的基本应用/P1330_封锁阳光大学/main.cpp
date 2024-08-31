#include <iostream>
#include <vector>
#include <bitset>
using namespace std;
const int maxn=1e4+10,maxm=1e5+10;
unsigned int n,m,u,v,fa[maxn];
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++) {
        fa[i]=i;
    }

    for(int i=0;i<m;i++) {
        cin>>u>>v;
    }
    return 0;
}
// 看完题解，知道了是用黑白染色做这题
// 先尝试一下并查集

// #include <iostream>
// #include <vector>
// #include <bitset>
// using namespace std;
// const int maxn=1e4+10,maxm=1e5+10;
// unsigned int n,m,u,v;
// struct edge {
//     vector<unsigned int> reach;
// }g[maxn];
// int main()
// {
//     cin>>n>>m;
//     for(int i=0;i<m;i++) {
//         cin>>u>>v;
//         g[u].reach.push_back(v);
//         g[v].reach.push_back(u);
//     }
//     g[]
//     return 0;
// }