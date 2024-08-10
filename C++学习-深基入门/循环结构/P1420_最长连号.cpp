#include <iostream>
using namespace std;
int n,a,maxx,curr_lian;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout.flush();
    cin>>n;
    int a_up;maxx=0;
    for (int i=0;i<n;i++){
        if (i>0) a_up=a;
        cin>>a;
        if ((a-a_up)==1){
            curr_lian+=1;
            maxx=max(maxx,curr_lian);
        }else{
            curr_lian=1;
        }
    }
    cout<<maxx<<endl;
    return 0;
}
// AC https://www.luogu.com.cn/record/170260856