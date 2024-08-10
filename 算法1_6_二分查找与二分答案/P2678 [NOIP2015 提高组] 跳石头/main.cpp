#include <iostream>
#include <algorithm>
using namespace std;
long long int len,n,m,stones[50010];

//                      最短跳跃距离
bool check(long long int min_jump) {
    long long int i=1,cnt=0,i_up=0;
    while(i<=(n+1)) {
        if(stones[i]-stones[i_up]>=min_jump)
            i_up=i;
        else
            cnt+=1;
        if(cnt>m)
            return false;
        i+=1;
    }
    if(cnt>m)
        return false;
    else
        return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(0);cin.tie(0);
    cin>>len>>n>>m;
    for(int i=1;i<=n;i++) {
        cin>>stones[i];     // 题目保证顺序输入
    }
    stones[n+1]=len;
    long long int l=0,r=len,ans=0;
    while(l<=r) {
        long long int mid=l+(r-l)/2;
        if (check(mid))         // 说明需要移动走的石头比主办方可以移走的少，说明min_jump可能小了，故要大一点
            l=mid+1,ans=mid;
        else
            r=mid-1;
    }
    cout<<ans<<endl;
    return 0;
}
// 第一次提交 90分 我很满意了 https://www.luogu.com.cn/record/171469422
// 最后发现是读题问题，终点是在第一行输入中就给出的，而不是在后面输入的
// 8 3 1
//2
//4
//7
// 原代码hack数据
// 结果还是90，6 https://www.luogu.com.cn/record/171481052
// 结果发现是吧终点加入了stones，但忘记调right指针的赋值了
// AC https://www.luogu.com.cn/record/171482127