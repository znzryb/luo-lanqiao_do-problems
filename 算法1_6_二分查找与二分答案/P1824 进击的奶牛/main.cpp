#include <iostream>
#include <algorithm>
using namespace std;
const int MAXN=1e5+10;
long long int n,c,houses[MAXN],maxX,ans;

bool check(long long int minx) {
    long long int cnt=0,lay_cow_index=0;
    for(int i=0;i<n;i++) {
        if(i!=0) {
            if((houses[i]-houses[lay_cow_index])>=minx) {
                cnt+=1;lay_cow_index=i;
            }
        }else {
            cnt=1;lay_cow_index=0;
        }
        if(cnt>=c) return true;
    }
    if (cnt>=c) {
        return true;
    }else {
        return false;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin>>n>>c;
    maxX=0;
    for(int i=0;i<n;i++) {
        cin>>houses[i];
        maxX=max(houses[i],maxX);
    }
    sort(begin(houses),begin(houses)+n);

    long long int l=0,r=maxX;
    while(l<=r) {
        long long int mid=l+(r-l)/2;
        if(check(mid))
            ans=mid,l=mid+1;
        else
            r=mid-1;
    }
    cout<<ans<<endl;
    return 0;
}
// AC https://www.luogu.com.cn/record/171311664