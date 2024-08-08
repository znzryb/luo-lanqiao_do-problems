#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
const int MAXN=2e5+10;
long long int n,m,a,as[MAXN];

bool check(long long int x){    // 模拟题意，判断x是否是合法的
    long long int summ=0;
    for (int i=0;i<n;i++){
        summ+=min(x,as[i]);
    }
    if (summ<=m){
        return true;
    }else{
        return false;
    }
}

int main(){
    cin>>n>>m;
    long long int sum=0;
    for (int i=0;i<n;i++){
        cin>>a;
        as[i]=a;
        sum+=a;
    }

    if (sum<=m){    // 如果所有人要的交通费总和还小于主办方有的money，那么直接输出infinite，然后返回，进行一个特判
        cout<<"infinite";
        return 0;
    }

    // 二分答案模版
    long long int l=0;long long int r=m;long long int ans=0;
    while (l<=r){
        long long int mid=l+(r-l)/2;  // 防溢出
        if (check(mid)){
            l=mid+1;    // mid是可以的，说明有可能太小了，提高一点l，下次的mid，多资助一点钱，看可不可以
            ans=mid;    // 这种情况下mid是合法的，故要更新ans
        }else{
            r=mid-1;
        }
    }
    cout<<ans<<endl;
    return 0;
}
// AC https://atcoder.jp/contests/abc365/submissions/56448983
// AC 洛谷 remote judge https://www.luogu.com.cn/record/171354194