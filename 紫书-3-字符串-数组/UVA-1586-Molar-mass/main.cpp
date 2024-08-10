// https://vjudge.net.cn/problem/UVA-1586#author=ProtonI
#include <iostream>
#include <cstdio>
#include <cctype>
#include <map>
#include <cmath>
#include <iomanip>
#include <string.h>
using namespace std;
int T,cnt,multipler;char c;char atom;int num[10];double ans;
map<char,double> map_atom={{'C',12.01},{'H',1.008},{'O',16.00},{'N',14.01}};
int main()
{
    cin>>T;
    getchar();      // 读掉换行符号
    while(T) {
        cnt=0;ans=0;
        while ((c=getchar())!='\n') {
            if(isdigit(c)){
                cnt+=1;
                num[cnt]=c-'0';
            }else {
                if(cnt==0) {
                    atom=c;
                    ans+=map_atom[c];   // 无论怎么样，先加上再说
                } else {
                    multipler=0;
                    for(int i=1;i<=cnt;i++) {
                        multipler+=pow(10,i-1)*num[cnt-i+1];
                    }
                    ans+=map_atom[atom]*(multipler-1);  // 因为我已经加过一个了，所以multipler要-1
                    atom=c;ans+=map_atom[c];cnt=0;memset(num,0,10);    // 这个作为数字结束符号的atom也要处理
                }
            }
        }
        // 末尾逻辑处理 否则会被类似于 O2 这样的东西hack
        if (cnt!=0) {
            multipler=0;    // multipler 要复位
            for(int i=cnt;i>0;i--) {
                multipler+=pow(10,i-1)*num[cnt-i+1];
            }
            ans+=map_atom[atom]*(multipler-1);
        }

        cout<<setprecision(3)<<fixed<<ans<<endl;
        T-=1;
    }
}
// AC https://vjudge.net.cn/solution/53344341