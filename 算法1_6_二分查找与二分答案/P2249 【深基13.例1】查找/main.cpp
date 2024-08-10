#include <iostream>
#include <algorithm>
using namespace std;
const int MAXN=1e6+10,MAXM=1e5+10;
long long int n,m,numbers[MAXN],as[MAXM];

// int find(long long int a) {
//     long long int l=0,r=n,ans=0;
//     while(l<=r) {
//         long long int mid=l+(r-l)/2;
//         if(numbers[mid]>=a)
//             r=mid-1,ans=mid;
//         else
//             l=mid+1;
//     }
//     if (numbers[ans]==a)
//         return ans+1;
//     else
//         return -1;
// }

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++) {
        cin>>numbers[i];
    }
    for(int i=0;i<m;i++) {
        cin>>as[i];
    }
    for(int i=0;i<m;i++) {
        long long int a=as[i];
        long long int index1=lower_bound(begin(numbers),begin(numbers)+n,a)-numbers;
        if (numbers[index1]==a)
            cout<<index1+1<<" ";
        else
            cout<<-1<<" ";
    }
    return 0;
}
// AC https://www.luogu.com.cn/record/171424107  stl 过法


// AC https://www.luogu.com.cn/record/171424673  自编find函数过法

// 以下是自编函数过法
// #include <iostream>
// using namespace std;
// const int MAXN=1e6+10,MAXM=1e5+10;
// long long int n,m,numbers[MAXN],as[MAXM];
//
// int find(long long int a) {
//     long long int l=0,r=n,ans=0;
//     while(l<=r) {
//         long long int mid=l+(r-l)/2;
//         if(numbers[mid]>=a)
//             r=mid-1,ans=mid;
//         else
//             l=mid+1;
//     }
//     if (numbers[ans]==a)
//         return ans+1;
//     else
//         return -1;
// }
//
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0);cout.tie(0);
//     cin>>n>>m;
//     for(int i=0;i<n;i++) {
//         cin>>numbers[i];
//     }
//     for(int i=0;i<m;i++) {
//         cin>>as[i];
//     }
//     for(int i=0;i<m;i++) {
//         long long int a=as[i];
//         cout<<find(a)<<" ";
//     }
// }