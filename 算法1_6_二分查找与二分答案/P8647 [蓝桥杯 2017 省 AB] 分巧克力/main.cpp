#include <iostream>
using namespace std;
const int MAXN=1e5+10;
int n,k,hw[MAXN][2],l=0,r=MAXN,h,w,mid,ans;

bool check(int mid) {
    int cnt=0;
    for(int i=0;i<n;i++) {
        h=hw[i][0];w=hw[i][1];
        cnt+=(h/mid)*(w/mid);
    }
    if (cnt>=k) {
        return true;
    }else {
        return false;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin>>n>>k;
    for(int i=0;i<n;i++) {
        cin>>hw[i][0]>>hw[i][1];
    }
    while (l<=r) {
        mid=l+(r-l)/2;
        if(check(mid)) {    // 可能分的巧克力太多了
            ans=mid;
            l=mid+1;        // 故要给每人的少分一点
        }else {
            r=mid-1;
        }
    }
    cout<<ans;
    return 0;
}
// AC https://www.luogu.com.cn/record/171902461