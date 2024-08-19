#include <iostream>
using namespace std;
int n,m,q,fa[5010],x,y;

int find(int x) {
    if(fa[x]!=x) {
        fa[x]=find(fa[x]);
        return fa[x];
    }else {
        return x;
    }
}

void unionn(int i,int j){
    int i_fa=find(i);
    int j_fa=find(j);
    fa[i_fa]=j_fa;
}

int main() {
    cin>>n>>m>>q;
    // 初始化并查集
    for(int i=1;i<=n;i++) {
        fa[i]=i;
    }
    // union 操作
    for(int i=0;i<m;i++) {
        cin>>x>>y;
        unionn(x,y);
    }

    // for(int i=1;i<=n;i++) {
    //     cout<<fa[i]<<" ";
    // }

    for(int i=0;i<q;i++) {
        cin>>x>>y;
        if(find(x)!=find(y)) {
            cout<<"No"<<endl;
        }else {
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}
// AC https://www.luogu.com.cn/record/173391077
// 并查集视频 https://www.bilibili.com/video/BV1jv411a7LK