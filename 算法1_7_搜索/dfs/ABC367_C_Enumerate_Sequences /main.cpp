#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n,k,rr[15],rrcopy[15];

void dfs(int y,int mulp_sum,vector<int> nums) {
    for(int i=1;i<=rrcopy[y+1];i++) {
        if(y+1==n) {
            if((mulp_sum+i)%k==0) {
                for(auto a:nums) {
                    cout<<a<<" ";
                }
                cout<<i<<endl;
            }
        }else {
            nums.push_back(i);
            dfs(y+1,mulp_sum+i,nums);
            nums.pop_back();
        }
    }
}

int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++) {
        cin>>rr[i];
    }
    copy(&rr[0],&rr[15],&rrcopy[0]);
    sort(&rr[1],&rr[n+1]);
    dfs(0,0,{});
    return 0;
}
// AC https://atcoder.jp/contests/abc367/submissions/56826481