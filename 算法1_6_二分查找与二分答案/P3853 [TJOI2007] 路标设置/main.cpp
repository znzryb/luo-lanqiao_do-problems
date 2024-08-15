#include <iostream>
#include <cmath>
using namespace std;
const long long int MAXN=100010;
long long int n,k,lenn,sign_posn[MAXN],r,l,mid,cnt,ans;

bool check(long long int max_dist){
    cnt=0;
    for(long long int i=0;i<=n+1;i++){
        if(i!=1){
            if(sign_posn[i]-sign_posn[i-1]>max_dist){
                // 这是为了处理正好边界长度就是max_dis的情况
                cnt+=ceil((sign_posn[i]-sign_posn[i-1])/1.0/max_dist)-1;
            }
        }
    }
    if(cnt<=k){
        return true;
    } else{
        return false;
    }
}

int main(){
    cin>>lenn>>n>>k;
    for(long long int i=1;i<=n;i++){
        cin>>sign_posn[i];
    }
    sign_posn[n+1]=lenn;
    l=0;r=lenn+1;
    while(l<=r){
        mid=l+(r-l)/2;
        if(check(mid)){		// 可能最大距离太大，增设太少的路标，故要减少最大距离
            r=mid-1;
            ans=mid;
        }else{
            l=mid+1;
        }
    }
    cout<<ans;
}
// 100 pts https://www.luogu.com.cn/record/171959332
