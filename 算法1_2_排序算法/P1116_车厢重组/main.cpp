#include <iostream>
#include <algorithm>
using namespace std;
int n,cnt;int a[10010],a_element;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin>>n;
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }
    cnt=0;int cnt_up=0;
    while(true) {
        for (int i=1;i<n;i++) {
            if (a[i-1]>a[i]) {
                swap(a[i-1],a[i]);
                cnt+=1;
            }
        }
        if (cnt==cnt_up) {
            cout<<cnt<<endl;
            return 0;
        }else {
            cnt_up=cnt;
        }
    }
    return 0;
}
// AC https://www.luogu.com.cn/record/171149074
// 就是冒泡排序