#include <iostream>
#include <map>
#include <vector>
using namespace std;
const int maxn=1010;      // 因为要用n+a表示反集
int fa[maxn] /*reserveFa[maxn][maxn]*/,n,m,p,q,cnt;
char op;
map<int,vector<int>> reserveFa;

int findd(int x) {
    if(x==fa[x]) {
        return x;
    }else {
        fa[x]=findd(fa[x]);     // 路径压缩
        return fa[x];
    }
}

void unionn(int p,int q){
    int p_fa=findd(p);
    int q_fa=findd(q);
    fa[p_fa]=q_fa;
}

void reserveUnionn(int p,int q) {
    //      就是p是能搜到的。
    if(reserveFa.find(p)!=end(reserveFa)) {
        for(auto fri : reserveFa[p])
            unionn(fri,q);
    }
    if(reserveFa.find(q)!=end(reserveFa)) {
        for(auto fri : reserveFa[q])
            unionn(fri,p);
    }
    reserveFa[p].push_back(q);
    reserveFa[q].push_back(p);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++) {
        fa[i]=i;
    }
    for(int i=0;i<m;i++) {
        cin>>op>>p>>q;
        if(op=='F') {
            unionn(p,q);
        }else {
            reserveUnionn(p,q);
        }
    }
    // 以下对团伙进行计数
    cnt=0;
    for(int i=1;i<=n;i++) {
        if(fa[i]==i)
            cnt+=1;
    }
    cout<<cnt<<endl;
    return 0;
}
// AC https://www.luogu.com.cn/record/173786979