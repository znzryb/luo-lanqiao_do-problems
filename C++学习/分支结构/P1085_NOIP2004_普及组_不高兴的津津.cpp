// https://www.luogu.com.cn/record/169936432
#include <iostream>
#include <cstdio>
#include <math.h>
#include <algorithm>
using namespace std;
int campusT,offT,maxx;
int main(){
    maxx=0;int maxxDate=0;
    for (int i=1;i<8;i++){
        cin>>campusT>>offT;
        if ((campusT+offT)>8){
            if (maxx<(campusT+offT)){
                maxx=campusT+offT;maxxDate=i;
            }
        }
    }
    cout<<maxxDate<<endl;
}
// AC https://www.luogu.com.cn/record/169936432