#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
using namespace std;
int n;vector<int> process;  // 有点类似于 bitset<44730> is_prime;
// 但这样初始化的process是一个空process，请不要怀疑

int main()
{
    scanf("%d",&n);
    process.push_back(n);   // 类似于python append()
    while (n!=1) {
        if (n%2==0) {
            n=n/2;
            process.push_back(n);
        }else {
            n=3*n+1;
            process.push_back(n);
        }
    }
    for (int i=process.size()-1;i>=0;i--) {
        int a=process[i];
        cout<<a<<" ";
    }
    return 0;
}
// AC https://www.luogu.com.cn/record/170695263