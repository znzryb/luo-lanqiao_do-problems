#include <iostream>
using namespace std;
long long int n;long long int m;long long int trees[1000010];

bool check(long long int mid) {
    long long int sum_cut=0;          // sum_cut记得开longlong
    for(int i=0;i<n;i++) {
        if (trees[i]>mid)
            sum_cut+=trees[i]-mid;
    }
    if (sum_cut>=m) {
        return true;
    }else {
        return false;
    }
}

int find(int l,int r) {
    int ans;
    while (l<=r) {
        long long int mid=l+(r-l)/2;
        if (check(mid)) {   // 可以,说明可能割太多了，要割少一点，故抬高高度
            l=mid+1;
            ans=mid;    // mid是valid的，故要更新ans
        }else {
            r=mid-1;
        }
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin>>n>>m;
    // maxx=0;
    for(int i=0;i<n;i++) {
        cin>>trees[i];
        // maxx=max(height,maxx);
        // trees[i]=height;
    }
    cout<<find(0,4e5)<<endl;
    return 0;
}

// sum_cut没开long long 60% https://www.luogu.com.cn/record/171275161  开了以后70%
// 数组大小太小了，改大之后就AC了，https://www.luogu.com.cn/record/171299001
