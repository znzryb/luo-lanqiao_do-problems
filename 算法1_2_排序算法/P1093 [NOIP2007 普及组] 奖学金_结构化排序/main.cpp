#include <iostream>
#include <algorithm>
using namespace std;
int n,a,b,c,summ;
const int MAXN=3e2+10;

struct student {
    int id,chinese,total;
}score_stu[MAXN];

bool cmp(student a,student b) {
    if (a.total!=b.total) return a.total>b.total;   // 比总分
    if (a.chinese!=b.chinese) return a.chinese>b.chinese;  // 比语文
    if (a.id!=b.id) return a.id<b.id;       // 比学号
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++) {
        cin>>a>>b>>c;
        summ=a+b+c;
        score_stu[i].id=i;
        score_stu[i].chinese=a;
        score_stu[i].total=summ;
    }
    //        这里加1是因为我是从一开始赋值的
    sort(begin(score_stu)+1,begin(score_stu)+n+1,cmp);
    for (int i=1; i<=5; i++) {
        cout<<score_stu[i].id<<" "<<score_stu[i].total<<endl;
    }
    return 0;
}
// AC https://www.luogu.com.cn/record/171097224