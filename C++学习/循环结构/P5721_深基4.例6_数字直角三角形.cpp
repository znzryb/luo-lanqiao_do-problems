#include <iostream>
#include <math.h>
using namespace std;
int n;
int main(){
    cin>>n;
    int j_end=0;
    for (int i=0;i<n;i++){
        j_end+=n-i;
        for (int j=j_end-n+i+1;j<=j_end;j++){
            if (j<10){
                if (j!=j_end)
                    cout<<"0"<<j;
                else
                    cout<<"0"<<j<<endl;
            }else{
                if (j!=j_end)
                    cout<<j;
                else
                    cout<<j<<endl;
            }
        }
    }
    return 0;
}
// AC https://www.luogu.com.cn/record/170045185