#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;
int a,b;
// vector<int> prime_hui;
bool check_hui(int i){
    string i_string=to_string(i);
    if (i<10) return true;
    int pi=0,pj=i_string.size()-1;
    while (pi<pj){
        if (i_string[pi]!=i_string[pj]) return false;
        pi+=1;
        pj-=1;
    }
    return true;
}

// 试除法
bool check_prime(int i){
    int endj=ceil(pow(i,0.5));
    for(int j=3;j<=endj;j+=2){
        if (i%j==0) return false;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cout.tie(0);
    scanf("%d %d",&a,&b);
    for (int i=a;i<=b;i++){
        if (check_hui(i)){
            if (i%2!=0){
                if (check_prime(i)) printf("%d\n",i);
            }
        }
    }
}
// 88 不优化 https://www.luogu.com.cn/record/170187335