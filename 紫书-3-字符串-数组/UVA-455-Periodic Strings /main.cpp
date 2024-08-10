#include <iostream>
#include <cstdio>
#include <string.h>
#include <cmath>
using namespace std;
int t;string a;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin>>t;
    while(t--) {
        cin>>a;
        bool whtherOut=false;
        for(int i=1;i<a.size();i++) {
            if (a.size()%i!=0)
                continue;
            bool whetherBreak=true;
            for(int j=0;j<(a.size()-i);j+=1) {
                if (a[j]!=a[j+i]) {
                    whetherBreak=false;
                    break;
                }
            }
            if(whetherBreak) {
                cout<<i<<endl;
                whtherOut=true;
                break;;
            }
        }
        if (whtherOut==false)
            cout<<a.size()<<endl;
        if(t!=0)
            cout<<endl;         // 这题输出对格式有一些奇怪的要求。
    }
    return 0;
}
// AC https://vjudge.net.cn/solution/53347112