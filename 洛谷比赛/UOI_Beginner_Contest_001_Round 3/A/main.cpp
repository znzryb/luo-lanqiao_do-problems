#include <iostream>
#include <vector>
#include <bitset>
using namespace std;
int n,t;
const int maxn=1e5+10;
vector<int> ans;
struct edge {
    vector<int> son;
}tree[maxn];
bitset<maxn> vis;

bool check() {

}

void dfs(int x) {
    if(ans.size()==n)

    for(int i=1;i<=n;i++) {
        if(!vis[i]) {
            vis[i]=true;
            ans.push_back(i);
            dfs(i);
            ans.pop_back();
            vis[i]=false;
        }
    }
}
int main()
{
    cin>>t;
    while(t--) {
        cin>>n;
        for(int i=1;i<=n;i++) {
            tree[i].son={};       // 初始化
        }
        vis.reset();
        dfs(0);


    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
