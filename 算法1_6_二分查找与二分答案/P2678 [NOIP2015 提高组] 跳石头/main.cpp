#include <iostream>
#include <algorithm>
using namespace std;
long long int l,n,m,stones[50010];

bool check(long long int max_jump) {
    long long int i=0,cnt=0,i_up=0;
    while (i<n) {
        for (long long int j=i+1;j<n;j++) {
            if (stones[j]-stones[i]>max_jump) {
                if((j-i)>2)
                    cnt+=j-i-2,i=j-1;
                break;
            }
            if (i==i_up)
                return false;
            else
                i_up=i;
        }
        if(cnt>m)
            return false;
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
    cin>>l>>n>>m;
    for(int i=0;i<n;i++) {
        cin>>stones[i];     // 题目保证顺序输入
    }
    long long int l=0,r=stones[n-1],ans=0;
    while(l<=r) {
        long long int mid=l+(r-l)/2;
        if (check(mid))
            l=mid+1,ans=mid;
        else
            r=mid-1;
    }
    cout<<ans<<endl;
    return 0;
}
