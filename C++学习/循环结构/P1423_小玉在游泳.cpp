#include <iostream>
using namespace std;
double s,curr_s,one_step_s;int step;
int main(){
    cin>>s;
    step=0;curr_s=0;one_step_s=2;
    while (curr_s<s){
        curr_s+=one_step_s;
        one_step_s=one_step_s*0.98;
        step+=1;
    }
    cout<<step<<endl;
    return 0;
}
// AC https://www.luogu.com.cn/record/170216794