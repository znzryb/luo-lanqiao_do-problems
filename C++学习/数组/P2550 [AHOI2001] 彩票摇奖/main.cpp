
#include <cstdio>
#include <vector>
using namespace std;
int n,a,cnt,a1;int cnt_lottery[8];
vector<int> lottery_vector; //vector<int> curr_lottery;
int main()
{
    scanf("%d",&n);
    for(int i=0;i<7;i++) {
        scanf("%d",&a);
        lottery_vector.push_back(a);
    }
    for (int j=0;j<n;j++) {
        cnt=0;
        for(int i=0;i<7;i++) {
            scanf("%d",&a1);
            for (int k=0;k<7;k++) {
                if (lottery_vector[k]==a1) {
                    cnt+=1;
                }
            }
        }
        cnt_lottery[7-cnt]+=1;
    }
    for (int i=0;i<7;i++) {
        printf("%d ",cnt_lottery[i]);
    }
    return 0;
}
// AC https://www.luogu.com.cn/record/170820469