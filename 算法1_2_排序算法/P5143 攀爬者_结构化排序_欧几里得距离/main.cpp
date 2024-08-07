// https://www.luogu.com.cn/problem/P5143
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>
using namespace std;
int n;double sum_distance,dst;

struct points {
    int x,y,z;
}p[50010];

bool cmp(points a,points b) {
    if(a.z!=b.z) return a.z<b.z;   // z小排前面，z大排后面
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(0);cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>p[i].x>>p[i].y>>p[i].z;
    }
    sort(begin(p),begin(p)+n,cmp);

    for (int i=1;i<n;i++) {
        dst=sqrt(pow((p[i].x-p[i-1].x),2)+pow((p[i].y-p[i-1].y),2)+pow((p[i].z-p[i-1].z),2));
        sum_distance+=dst;
    }
    cout<<setprecision(3)<<fixed<<sum_distance<<endl;
    return 0;
}
// AC https://www.luogu.com.cn/record/171137490