// 是否越界；
// 这个位置是否之前抵达过且比现在抵达的次数要早；
// 当前的次数是否超过了目前的答案。    2nd最重要,有2nd，第三个可以去掉

#include <iostream>
#include <cstring>
int const maxn=0x7f7f7f7f;
using namespace std;
int a,b,n,kk[210],ii,min_step[210];int min_cnt=maxn;
//     now
void dfs(int y,int cnt) {
    if(y==b) {
        min_cnt=min(min_cnt,cnt);
        return;
    }
    min_step[y]=cnt;
    // 这个位置是否之前抵达过且比现在抵达的次数要早；
    if(y+kk[y]<=n && cnt+1<min_step[y+kk[y]])
        dfs(y+kk[y],cnt+1);
    if(y-kk[y]>0 && cnt+1<min_step[y-kk[y]])
        dfs(y-kk[y],cnt+1);
}

int main()
{
    cin>>n>>a>>b;
    for(int i=1;i<=n;i++) {     // 1_based index
        cin>>kk[i];
    }
    //      其实是set了0x7f7f7f7f 即 2139062143  int 能够表示的最大整数
    memset(min_step,0x7f,sizeof(min_step));
    dfs(a,0);
    if(min_cnt!=maxn)
        cout<<min_cnt;
    else
        cout<<-1;
    return 0;
}
// MLE 了好多点 12 pts不太理解 https://www.luogu.com.cn/record/172615059
// 46pts https://www.luogu.com.cn/record/172640370
// 64pts 处理了一下无解 https://www.luogu.com.cn/record/172647945
// 试试看在入栈之前筛掉,还是64pts
// 好像把<=改成<就过了，离谱
// AC https://www.luogu.com.cn/record/172652360