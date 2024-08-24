// WA了几次以后我懂了，其实这就是敌人的敌人还是敌人
#include <iostream>
#include <map>
#include <vector>
#include <set>
using namespace std;
const int maxn=5e4+10;
//        并查集所用的静态列表
int n,k,x,y,fa[maxn],cnt,op;
map <int,set<int>> eat;
map <int,set<int>> canEat;
int findd(int x) {
    if(fa[x]==x) {
        return x;
    }else {
        fa[x]=findd(fa[x]);
        return fa[x];
    }
}

void unionn(int x,int y) {
    int originX=findd(x);
    int originY=findd(y);
    fa[originX]=originY;
    // 同步两者的天敌
    for(auto ch:eat[x]) {
        eat[y].insert(ch);
    }
    for(auto ch:eat[y]) {
        eat[x].insert(ch);
    }
}
// x吃y，eat里放y的天敌
void eatUnion(int x,int y) {
    eat[y].insert(x);
    // 但y也能吃x的天敌
    for(auto ch:eat[x]) {
        eat[ch].insert(y);
    }
}
// 检查两者是否是天敌关系
bool check(int x,int y) {
    for(auto ch:eat[y]) {
        if(ch==x)
            return false;
    }
    for(auto ch:eat[x]) {
        if(ch==y)
            return false;
    }
    return true;
}

int main()
{
    cin>>n>>k;
    cnt=0;
    for(int i=1;i<=n;i++) {
        fa[i]=i;
    }
    for(int i=0;i<k;i++) {
        cin>>op>>x>>y;
        if(x>n or y>n) {
            cnt+=1;
            continue;
        }
        if(op==1) {
            if(eat.find(y)==end(eat) or check(x,y))
                unionn(x,y);
            else {
                cnt+=1;
                continue;
            }
        }else {    //  下面是x吃y
            // 下面几个都是检查是否是假话
            if(x==y) {
                cnt+=1;
                continue;
            }
            // 如果是同类，不能互相吃
            if(findd(x)==findd(y)) {
                cnt+=1;
                continue;
            }
            eatUnion(x,y);
        }
    }
    cout<<cnt<<endl;
    return 0;
}
// hack数据
// 3 3
// 2 3 2
// 2 2 1
// 1 1 3