#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int n,q,k;      
// int prime[7000001];
bool is_prime[100001];   // 默认值是0 n/ln(n)  素数个数估值

int main(){
    cin.tie(0)->sync_with_stdio(0); // 快读
    cout.flush();
    cin>>n;

    for (int i=0;i<=n;i++){
        is_prime[i]=true;
    }
    is_prime[0]=false;is_prime[1]=false;

    for (int i=2;i<=n;i++){
        if (is_prime[i]==true){
            for (int j=2;j<=n;j++){
                if (i*j>n) break;
                is_prime[i*j]=false;
            }
        }
    }

    int i=2,count=0,summ=0;
    while (true){
        if (is_prime[i]==true){
            summ+=i;
            if (summ>n){
                break;
            }
            cout<<i<<endl;
            count+=1;
        }
        i+=1;
    }
    cout<<count<<endl;
    return 0;
}

// AC https://www.luogu.com.cn/record/170102319