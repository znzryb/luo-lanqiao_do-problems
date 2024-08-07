#include <iostream>
#include <map>
// 计数排序
using namespace std;
int n,m,a;int cnts[1005];
map<int,int> person_voteCnt;
int main()
{
    ios::sync_with_stdio(false);
    cout.tie(0);cin.tie(0);
    cin>>n>>m;
    // 初始化字典
    for (int i=1;i<=n;i++) {
        person_voteCnt[i]=0;
    }

    for (int i=0;i<m;i++) {
        cin>>a;
        person_voteCnt[a]+=1;
    }
    for (int i=1;i<=n;i++) {
        for (int j=0;j<person_voteCnt[i];j++) {
            cout<<i<<" ";
        }
    }
}
// AC https://www.luogu.com.cn/record/171055191