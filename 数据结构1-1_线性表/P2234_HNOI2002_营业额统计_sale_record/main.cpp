#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
const int maxn=32767+10;const int maxEle=2e6+10,lowEle=-2e6-10;
int n,l,r,osl,osr,os[maxn];long long int summ=0;
set<int> setSale;
set<int>::iterator itlow,itup,it0;

int main() {
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>os[i];
    }
    setSale.insert(maxEle);
    setSale.insert(lowEle);
    setSale.insert(os[0]);
    summ=os[0];
    for(int i=1;i<n;i++) {
        itup=setSale.lower_bound(os[i]);
        itlow=prev(itup);
        // cout<<i+1<<" : "<<min(abs(*itlow-os[i]),abs(*itup-os[i]))<<endl;
        summ+=min(abs(*itlow-os[i]),abs(*itup-os[i]));
        setSale.insert(os[i]);
    }
    cout<<summ;
    return 0;
}

// AC https://www.luogu.com.cn/record/173372494
