#include <iostream>
#include <unordered_set>
using namespace std;
int n,m,x,y,fa[1010],fa_node;
unordered_set<int> a;

int find(int x) {
    if(fa[x]==x) {
        return x;
    }else {
        fa[x]=find(fa[x]);
        return fa[x];
    }
}

void unionn(int i,int j) {
    int i_fa=find(i);
    int j_fa=find(j);
    fa[i_fa]=j_fa;
}

int main()
{
    while (true) {
        // 初始化，避免多组数据间互相干扰（虽然可能不需要）
        a={};
        fill(begin(fa),end(fa),0);
        cin>>n>>m;
        if(n==0)
            break;
        for(int i=1;i<=n;i++) {
            fa[i]=i;
        }
        for(int i=0;i<m;i++) {
            cin>>x>>y;
            unionn(x,y);
        }
        for(int i=1;i<=n;i++) {
            fa_node=find(i);
            a.insert(fa_node);
        }
        cout<<a.size()-1<<endl;
    }
    return 0;
}
// AC https://www.luogu.com.cn/record/173396314