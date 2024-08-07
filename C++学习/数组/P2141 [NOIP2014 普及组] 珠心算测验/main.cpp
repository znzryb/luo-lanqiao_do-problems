#include <cstdio>
#include <algorithm>
#include <bitset>
using namespace std;
int n,num,ans;int numbers[110];
bitset<20010> numWhetheris;

bool check(int i,int j) {
    int sum=numbers[i]+numbers[j];
    for (int k=0;k<n;k++) {
        if (numbers[k]==sum) {
            return true;
        }
    }
    return false;
}

int main()
{
    scanf("%d",&n);
    for (int i=0;i<n;i++) {
        scanf("%d",&num);
        numbers[i]=num;
    }
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(check(i,j)) {
                numWhetheris[numbers[i]+numbers[j]]=true;
            }
        }
    }
    // ans=0;
    // for(int i=1;i<=n;i++) {
    //     if(numWhetheris[i]) {
    //         ans+=1;
    //     }
    // }
    ans=numWhetheris.count();
    printf("%d",ans);
    return 0;
}
// AC https://www.luogu.com.cn/record/170931439
