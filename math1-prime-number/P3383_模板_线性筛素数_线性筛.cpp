#include <iostream>
#include <math.h>
#include <algorithm>
#include <bitset>
#include <stdio.h>

using namespace std;

int n,q,k,cnt;      
int prime[6000001],queries[1000001];
bitset<100000010> is_prime;   // 默认值是0    n/ln(n)  素数个数估值

// 线性筛算法
void getPrimeBelowN(int n){
    is_prime.set();         // 将默认值改为1
    is_prime[0]=0;is_prime[1]=0;
    for (int i=2;i<=n;i++){
        if (is_prime[i]){
            prime[++cnt]=i; // 第一个开始存的是2，即prime[1]=2
        }
        for (int pj=1;pj<=cnt && prime[pj]*i<=n;pj++){     //pj 即是指j是prime的指针
            is_prime[prime[pj]*i]=0;
            if (i%prime[pj]==0) 
                break;
        }
    }
}

int main(){
    cin.tie(0)->sync_with_stdio(0); // 快读
    cout.flush();
    cin>>n>>q;
    getPrimeBelowN(n);
    for(int i=0;i<q;i++){
        cin>>k;
        cout<<prime[k]<<endl;
    }
}

// AC https://www.luogu.com.cn/record/170173193



// 埃式筛全RE
// #include <iostream>
// #include <math.h>
// #include <algorithm>
// using namespace std;

// int n,q,k;      
// int prime[700001],queries[1000001];
// bool is_prime[100000001];   // 默认值是0 n/ln(n)  素数个数估值

// int main(){
//     cin.tie(0)->sync_with_stdio(0); // 快读
//     cout.flush();
//     cin>>n>>q;

    
//     for(int i=0;i<q;i++){
//         cin>>k;
//         queries[i]=k;
//     }

//     for (int i=0;i<=n;i++){
//         is_prime[i]=true;
//     }
//     is_prime[0]=false;is_prime[1]=false;

//     for (int i=2;i<=n;i++){
//         if (is_prime[i]==true){
//             for (int j=2;j<=n;j++){
//                 if (i*j>n) break;
//                 is_prime[i*j]=false;
//             }
//         }
//     }

//     int count=0;
//     for (int i=2;i<=n;i++){
//         if (is_prime[i]==true){
//             prime[count]=i;
//             count+=1;
//         }
//     }

//     for (int i=0;i<q;i++){
//         k=queries[i];
//         cout<<prime[k-1]<<endl;
//     }
    
//     return 0;
// }