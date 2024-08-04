#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int n,a;int as[110],ascopy[110];

// 降序排列
bool cmp(int a,int b){
    return a>b;
}

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        as[i]=a;
    }

    copy(begin(as),end(as),ascopy);
    sort(begin(as),end(as),cmp);
    
    int needFind=as[1];
    for (int i=0;i<n;i++){
        if (ascopy[i]==needFind){
            cout<<i+1<<endl;
            return 0;
        }
    }
}