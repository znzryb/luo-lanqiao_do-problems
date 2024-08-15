#include <iostream>
using namespace std;
int const MAXN=2e5+10;
long long int n,m,aa[MAXN],bb[MAXN],a,b,l,r,maxType,cnt,mid,ans;

bool check(long long int nType) {
    cnt=0;
    for(int i=0;i<n;i++) {
        a=aa[i];
        b=bb[i];
        if(a>=nType) {      // 都大于或等于n，一定能凑出n套
            continue;
        }
        if(a+b>=nType) {
            cnt+=nType-a;
        }else {
            return false;   // 如果a+b<nType
        }
    }
    if(cnt>m) {
        return false;
    }else {
        return true;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin>>n>>m;
    maxType=0;
    for(int i=0;i<n;i++) {
        cin>>aa[i];
        maxType=max(maxType,aa[i]);
    }
    for(int i=0;i<n;i++) {
        cin>>bb[i];
    }
    l=0,r=maxType;
    while(l<=r) {
        mid=l+(r-l)/2;
        if(check(mid)) {    // mid 可能太小，比较小，所以用小于m个空白牌也行
            ans=mid;
            l=mid+1;
        }else {
            r=mid-1;
        }
    }
    cout<<ans<<endl;
    return 0;
}
// 80pts https://www.luogu.com.cn/record/172281005
// 100pts 蓝桥 https://www.lanqiao.cn/problems/2191/learning/?page=1&first_category_id=1&name=%E5%8D%A1%E7%89%8C
