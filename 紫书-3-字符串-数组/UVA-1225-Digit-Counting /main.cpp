#include <iostream>
#include <string.h>
using namespace std;
int T,a,cnts[15];
int main()
{
    cin>>T;
    while (T--) {
        cin>>a;
        for(int i=1;i<=a;i++) {
            string i_string=to_string(i);
            for(int j=0;j<i_string.size();j++) {
                int index=i_string[j]-'0';
                cnts[index]+=1;
            }
        }
        for (int i=0;i<=9;i++) {
            if(i!=9)
                cout<<cnts[i]<<" ";
            else
                cout<<cnts[i];      // 换行之前没有空格不然PE
        }
        cout<<endl;
        //             这个实际上是字节数，故必须是sizeof，不能是.size(),或者15
        memset(cnts,0,sizeof(cnts));      // 初始化记得
    }
    return 0;
}
// AC https://vjudge.net.cn/solution/53348276