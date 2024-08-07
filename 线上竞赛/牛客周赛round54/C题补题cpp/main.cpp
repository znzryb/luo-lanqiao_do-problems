#include <iostream>
#include <algorithm>
using namespace std;
int n;long long int m,a;long long int feeds[100010];int ans;
int main()
{
    ios::sync_with_stdio(false);
    cout.tie(0);cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++) {
        cin>>a;
        feeds[i]=a;
    }
    sort(begin(feeds),begin(feeds)+n);

    int cnt=0;int cnt_up=0;ans=0;
    for(int i=0;i<n;i++) {
        // 这个if是判断是不是第一个，因为第一个i=0，没有i-1，要特判。
        if (i!=0) {
            // 如果两个连续树是
            if (feeds[i]==feeds[i-1]) {
                if (cnt_up!=0 and cnt>=cnt_up) {
                    cnt=cnt_up;
                }else {
                    cnt+=1;
                }
            }else if(feeds[i]-feeds[i-1]==1) {
                cnt_up=cnt;
                ans+=cnt;
                cnt=1;
            }else {
                ans+=cnt;
                cout<<ans;
                return 0;
            }
        }else {
            if (feeds[i]==1) {
                cnt=1;  // i=0时的特判
            }else {
                cout<<0;    // 记得要特判没有1级饲料的情况
                return 0;
            }
        }
    }
    ans+=cnt;
    cout<<ans;
    return 0;
}
// https://ac.nowcoder.com/acm/contest/view-submission?submissionId=70730331 发生段错误，由于代码给数组开的空间少打了个0
// 92% https://ac.nowcoder.com/acm/contest/view-submission?submissionId=70730835 没有特判没有1级饲料情况
// 100% https://ac.nowcoder.com/acm/contest/view-submission?submissionId=70732210