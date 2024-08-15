#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
const int maxn=20;
int n;
double xy[maxn][2],minDis=1000000000;
bool vis[maxn];

void dfs(double x,double y,double sumDis,int cnt) {
    if(cnt==n) {
        minDis=min(minDis,sumDis);
        return;
    }
    for(int i=0;i<n;i++) {
        if(!vis[i] && sumDis+sqrt(pow((x-xy[i][0]),2)+pow((y-xy[i][1]),2))<minDis) {
            vis[i]=true;cnt+=1;
            sumDis+=sqrt(pow((x-xy[i][0]),2)+pow((y-xy[i][1]),2));  // 占位
            // cout<<cnt<<" : "<<sumDis<<endl;
            dfs(xy[i][0],xy[i][1],sumDis,cnt);
            vis[i]=false;cnt-=1;
            sumDis-=sqrt(pow((x-xy[i][0]),2)+pow((y-xy[i][1]),2));  // 复位
        }
    }
}

int main() {
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>xy[i][0]>>xy[i][1];
    }
    dfs(0,0,0,0);
    cout<<setprecision(2)<<fixed<<minDis;
}
