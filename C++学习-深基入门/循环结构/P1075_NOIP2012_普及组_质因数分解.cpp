#include <iostream>
#include <math.h>
#include <bitset>
// 已知正整数 n 是两个不同的质数的乘积(前面一句话是关键)，试求出两者中较大的那个质数。
// 故用线性筛筛到sqrt（n）即可（只用判断出较小的那个就行，较大的就用n/p）
using namespace std;
long long int n,smallprime;

bitset<44730> is_prime;     // cout<<ceil(pow(2000000000,0.5))==44722
int prime[4300];             // 4178 cout<<ceil(44730/log(44730))

// 线性筛模版
void getPrime(int n){
    is_prime.set();
    is_prime[0]=0;is_prime[1]=0;
    int cnt=0;
    for (int i=2;i<=n;i++){
        if (is_prime[i]==1){
            prime[++cnt]=i;
        }
        for (int pj=1;pj<=cnt && prime[pj]*i<=n;pj++){  //这个条件比较多，看看清楚
            is_prime[prime[pj]*i]=0;
            if (i%prime[pj]==0) break;
        }
    }
}

int main(){
    cin>>n;
    getPrime(ceil(sqrt(n)));
    int dividor_range=ceil(sqrt(n));
    for (int i=1;i<=dividor_range;i++){
        if (n%(prime[i])==0){
            smallprime=prime[i];
            break;
        cout<<i<<endl;
        }
    }
    long long int bigPrime=floor(n/smallprime);
    cout<<bigPrime<<endl;   // 小心溢出
    return 0;
}
// B2084 AC https://www.luogu.com.cn/record/170268304
// P1075 AC https://www.luogu.com.cn/record/170269556