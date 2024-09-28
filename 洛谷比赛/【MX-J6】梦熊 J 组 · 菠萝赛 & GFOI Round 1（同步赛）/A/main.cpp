// https://www.luogu.com.cn/problem/T513288?contestId=198975
#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;
int n,k,a,cnt;
set<int> A,B;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin>>n>>k;
    bool isFind=false;
    for(int i=1;i<=n;i++) {
        cin>>a;
        if(!isFind) {
            if(B.find(a)!=B.end() || A.find(a)!=A.end())
                isFind=true;
            B.insert(a+k);
            A.insert(a-k);
        }
    }
    if(isFind)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}
