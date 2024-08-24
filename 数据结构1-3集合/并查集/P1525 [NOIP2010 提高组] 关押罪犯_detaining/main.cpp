// 看了题解的思路，说是矛盾值大就认为两者是敌人，矛盾值小就认为两者是朋友
// 我先做一下1892团伙，学习一下反集
#include <iostream>
using namespace std;
const int maxn=20000+10,maxm=100000+10;
int n,m,fa[2*maxn];

struct threeData {
    int a,b;
    unsigned long long int c;
}abc[maxm];

bool comp(threeData a,threeData b) {
    if(a.c!=b.c) return a.c>b.c;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin>>n>>m;
    for(int i=0;i<m;i++) {
        cin>>abc[i].a>>abc[i].b>>abc[i].c;
    }
    sort(&abc[0],&abc[m],comp);
    for(int i=0;i<m;i++) {

    }

    return 0;
}
