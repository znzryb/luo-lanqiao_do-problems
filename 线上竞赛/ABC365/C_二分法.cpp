#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int n,a;int as[200010];
long long int m,x,i,j;

bool check(int x){
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
    int sum=0;
    for (int i=0;i<n;i++){
        cin>>a;
        as[i]=a;
        sum+=a;
    }

    if (sum<=m){
        cout<<"infinite";
        return 0;
    }

    // 二分搜索
    int i=0;int j=m;
    
    while (j>i){
        x=i+(j-i)/2;
        if (check(x)){
            i=x+1;
        }else{
            j=x-1;
        }
    }
    cout<<x<<endl;
    return 0;
}