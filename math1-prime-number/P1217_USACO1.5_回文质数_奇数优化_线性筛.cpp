#include <iostream>
#include <math.h>
#include <cstdio>
#include <bitset>

using namespace std;
int a,b;
bitset<100000010> is_prime;
int prime[6000001];

void getPrime(int n){
    is_prime.set();
    is_prime[1]=0;is_prime[0]=0;
    int cnt=0;
    for (int i=2;i<=n;i++){
        if (is_prime[i]){
            prime[++cnt]=i;
        }
            
        for (int pj=1;pj<=cnt && prime[pj]*i<=n;pj++){
            is_prime[prime[pj]*i]=0;
            if (i%prime[pj]==0) 
                break;
        }
    }
}

bool check_hui(int i){
    string i_string=to_string(i);
    if (i<10) return true;
    if (i==11) return true;
    int pi=0,pj=i_string.size()-1;
    while (pi<pj){
        if (i_string[pi]!=i_string[pj]) return false;
        pi+=1;
        pj-=1;
    }
    return true;
}

// 试除法
// bool check_prime(int i){
//     float endj=floor(pow(i,0.5));
//     for(int j=3;j<=endj;j+=2){
//         if (i%j==0) return false;
//     }
//     return true;
// }

int main(){
    ios::sync_with_stdio(false);
    cout.tie(0);
    scanf("%d %d",&a,&b);
    if (b>10000000) b=9999999;    // 这里的写法参考了这篇题解——https://www.luogu.com.cn/article/svo1wi3y
    getPrime(b);                  // 原因是8位回文数没有素数，因为他们必定可以被11整除
    if (a%2!=0){
        for (int i=a;i<=b;i+=2){
            if (check_hui(i)){
                if (is_prime[i]) printf("%d\n",i);
            }
        }
    }else{
        for (int i=a+1;i<=b;i+=2){
            if (check_hui(i)){
                if (is_prime[i]) printf("%d\n",i);  // index不用-1，因为存的时候就没讲究
            }
        }
    }
}

// 11的整倍数有一个性质，那就是奇数位上数字之和=偶数位上数字之和。
// 因为11的倍数可以看作11不断的累加，加11一定是奇数上加一位，偶数上加一位，最后形成了这个定理

// 一个数，如果是偶数长度回文数，那么同一个数x，必然出现在一次奇数位一次偶数位，所以这个偶数长度回文数可以被11整除。
// 88 不优化 https://www.luogu.com.cn/record/170187335
// 88 时间优化了很多（/2），但还是过不了 https://www.luogu.com.cn/record/170194349
// AC https://www.luogu.com.cn/record/170203082