// https://www.luogu.com.cn/problem/P1909
#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int n,n_pack,cost;
long long int curr_all_cost,minn;
int main(){
    minn=pow(10,10);
    cin>>n;
    for (int i=0;i<3;i++){
        cin>>n_pack>>cost;
        curr_all_cost=ceil(static_cast<float>(n)/n_pack)*cost;
        minn=min(curr_all_cost,minn);
    }
    cout<<minn;
    return 0;
}
// AC https://www.luogu.com.cn/record/169980640