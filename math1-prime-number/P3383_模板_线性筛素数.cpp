#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int n,q,k;      
int prime[100000001],queries[1000001];
bool is_prime[7000001];   // 默认值是0 n/ln(n)  素数个数估值

int main(){
    cin.tie(0)->sync_with_stdio(0); // 快读
    cout.flush();
    cin>>n>>q;

    
    for(int i=0;i<q;i++){
        cin>>k;
        queries[i]=k;
    }

    for (int i=0;i<=n;i++){
        is_prime[i]=true;
    }
    is_prime[0]=false;is_prime[1]=false;

    for (int i=2;i<=n;i++){
        if (is_prime[i]==true){
            for (int j=i;j<=n;j++){
                if (i*j>n) break;
                is_prime[i*j]=false;
            }
        }
    }

    int count=0;
    for (int i=2;i<=n;i++){
        if (is_prime[i]==true){
            prime[count]=i;
            count+=1;
        }
    }

    for (int i=0;i<q;i++){
        k=queries[i];
        cout<<prime[k-1]<<endl;
    }
    return 0;
}