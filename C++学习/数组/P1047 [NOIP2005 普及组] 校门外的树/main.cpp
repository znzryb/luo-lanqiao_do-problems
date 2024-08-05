#include <iostream>
#include <cstdio>
#include <bitset>
// 将区域内的树全部移除
// bitset相关函数操作 https://www.cnblogs.com/RabbitHu/p/bitset.html

// foo.set(p) 将第p + 1位变成1
// foo.set(p, x) 将第p + 1位变成x
// foo.reset() 全都变成0
// foo.reset(p) 将第p + 1位变成0

using namespace std;
int l,mRange;int u,v,ans;
bitset<10010> treeSet;
int main()
{
    scanf("%d %d",&l,&mRange);
    treeSet.set();
    for(int i=0;i<mRange;i++) {
        scanf("%d %d",&u,&v);
        for (int j=u;j<=v;j++) {
            treeSet[j]=false;
        }
    }
    ans=0;
    for (int i=0;i<=l;i++) {
        if (treeSet[i]==true)
            ans+=1;
    }
    printf("%d",ans);
    return 0;
}
// AC https://www.luogu.com.cn/record/170748879