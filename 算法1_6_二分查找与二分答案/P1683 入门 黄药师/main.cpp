#include <iostream>
#include <vector>

using namespace std;
char mapp[25][25];int w,h,start_x,start_y,curr_x,curr_y,x,y,cnt;
vector <pair<int,int>> stack;pair<int,int> pxy,future_pxy;
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
bool vis[25][25];

int main(){
    cin>>w>>h;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>mapp[i][j];
            if(mapp[i][j]=='@'){
                start_x=i;
                start_y=j;
            }
        }
    }
    pxy=make_pair(start_x,start_y);
    stack.push_back(pxy);
    vis[start_x][start_y]=true;
    //     就是不空
    cnt=1;
    while (stack.empty()==0){
        pxy=stack[stack.size()-1];
        stack.pop_back();
        curr_x=pxy.first;
        curr_y=pxy.second;
        for(int i=0;i<4;i++){
            x=curr_x+dx[i];
            y=curr_y+dy[i];
            if(x>=0 and x<h and y<w and y>=0) {
                if (mapp[x][y]=='.' and vis[x][y]==false) {
                    future_pxy=make_pair(x,y);
                    stack.push_back(future_pxy);
                    cnt+=1;
                    vis[x][y]=true;
                }
            }
        }
    }
    cout<<cnt;
}
// AC https://www.luogu.com.cn/record/172475909