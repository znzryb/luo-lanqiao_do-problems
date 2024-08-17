#include <iostream>
#include <queue>
using namespace std;
int n,x,y,t,mapp[310][310];
bool vis[310][310];
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};

struct threeData {
    int x;
    int y;
    int t;
}xyt,xyto;

queue <threeData> q;

void color_mapp(int x,int y,int t) {
    if(mapp[x][y]==0) {
        mapp[x][y]=t;
    }else {
        mapp[x][y]=min(t,mapp[x][y]);
    }
    for(int i=0;i<4;i++) {
        if(x+dx[i]<0 or y+dy[i]<0)
            continue;
        if(mapp[x+dx[i]][y+dy[i]]==0) {
            if(t==0)
                mapp[x+dx[i]][y+dy[i]]=-1;
            else
                mapp[x+dx[i]][y+dy[i]]=t;
        }else {
            if(t==0)
                mapp[x+dx[i]][y+dy[i]]=-1;
            else
                mapp[x+dx[i]][y+dy[i]]=min(mapp[x+dx[i]][y+dy[i]],t);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>x>>y>>t;
        color_mapp(x,y,t);
    }
    //  mapp initialize and input
    // for(int i=0;i<7;i++) {
    //     for(int j=0;j<7;j++) {
    //         cout<<mapp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    if(mapp[0][0]==0) {
        cout<<0;
        return 0;
    }
    xyt.x=0;xyt.y=0;xyt.t=0;
    q.push(xyt);
    vis[0][0]=true;
    while(!q.empty()) {
        xyto=q.front();
        x=xyto.x;
        y=xyto.y;
        t=xyto.t;
        q.pop();
        // cout<<"x:"<<x<<" y:"<<y<<" t:"<<t<<endl;
        for(int i=0;i<4;i++) {
            if(x+dx[i]<0 or y+dy[i]<0)
                continue;
            if(vis[x+dx[i]][y+dy[i]])
                continue;
            if(mapp[x+dx[i]][y+dy[i]]==0) {
                cout<<t+1<<endl;
                return 0;
            }
            if(t+1<mapp[x+dx[i]][y+dy[i]]) {
                xyt.x=x+dx[i];
                xyt.y=y+dy[i];
                xyt.t=t+1;
                q.push(xyt);
                vis[x+dx[i]][y+dy[i]]=true;
            }
        }
    }
    cout<<-1<<endl;
    return 0;
}
// P2895 [USACO08FEB] Meteor Shower S,当调试发现点在乱飞，要想一想自己xy是不是打反了，
// xyt.x=x+dx[i];
// xyt.y=y+dy[i];
// 之前我y后面跟着dx，离谱
// WA 了1个点 93 pts https://luogu.com.cn/record/173209065
// WA了一个点，down下来发现没考虑零时刻会降下陨石
// hack数据
// 5
// 0 0 2
// 3 0 0
// 1 2 5
// 2 2 4
// 1 4 4
// AC https://www.luogu.com.cn/record/173211669