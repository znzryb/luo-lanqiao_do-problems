#include <iostream>
#include <math.h>
#include <algorithm>
#include <iomanip>
// #include <cstdio>
using namespace std;
int elect_cost,cost;
int main(){
    cin>>elect_cost;
    if (elect_cost<=150){
        cout<<setprecision(1)<<fixed<<elect_cost*0.4463;
    }else if(elect_cost>150 and elect_cost<=400){
        cout<<setprecision(1)<<fixed<<(elect_cost-150)*0.4663+150*0.4463;
    }else{
        cout<<setprecision(1)<<fixed<<(elect_cost-400)*0.5663+250*0.4663+150*0.4463;
    }
}
// AC https://www.luogu.com.cn/record/169991991