#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int n,m,m_in,cnt;
const int MAXN=5e3+10;

struct voluteer {
    int id,score;
}a[MAXN];

bool cmp(voluteer a,voluteer b) {
    if (a.score != b.score)  return a.score>b.score;
    if (a.id != b.id) return a.id<b.id;
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(0);cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++) {
        cin>>a[i].id>>a[i].score;
    }
    sort(begin(a),begin(a)+n,cmp);
    m_in=floor(m*1.5);
    cnt=0;
    for(int i=m_in;i<n;i++) {
        if (a[i].score==a[i-1].score) {
            cnt+=1;
        }else {
            break;
        }
    }
    m_in+=cnt;
    cout<<a[m_in-1].score<<" "<<m_in<<endl;
    for(int i=0;i<m_in;i++) {
        cout<<a[i].id<<" "<<a[i].score<<endl;
    }
    return 0;
}
// https://www.luogu.com.cn/record/171115631