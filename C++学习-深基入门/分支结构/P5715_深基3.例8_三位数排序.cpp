#include <iostream>
using namespace std;
int a,b,c;
int main(){
    cin>>a>>b>>c;
    // 冒泡排序,降序
    if (a>b) swap(a,b);
    if (b>c) swap(b,c);
    // 若a是最大的，此时已经被移动到最左端
    if (a>b) swap(a,b);
    cout<<a<<" "<<b<<" "<<c;
}
// AC https://www.luogu.com.cn/record/169925343