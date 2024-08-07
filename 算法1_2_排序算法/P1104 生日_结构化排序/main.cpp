// https://www.luogu.com.cn/problem/P1104
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int n;

struct oiStudent {
    string name;int year,month,date,id;
}a[110];

bool cmp(oiStudent a,oiStudent b) {
    if (a.year!=b.year) return a.year<b.year;
    if (a.month!=b.month) return a.month<b.month;
    if (a.date!=b.date) return a.date<b.date;   //
    if (a.id!=b.id) return a.id>b.id;   // 输入靠后的先输出
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>a[i].name>>a[i].year>>a[i].month>>a[i].date;
        a[i].id=i;
    }
    sort(begin(a),begin(a)+n,cmp);
    for (int i=0;i<n;i++) {
        cout<<a[i].name<<endl;
    }
    return 0;
}
// AC https://www.luogu.com.cn/record/171124142