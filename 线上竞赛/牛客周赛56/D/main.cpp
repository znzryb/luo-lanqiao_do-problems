#include <iostream>
#include <vector>
using namespace std;
const int maxn=1e4+10;
long long int T,n,aa[maxn],ans;
bool vis[maxn];

long long int summ(vector<int> tri,int c) {
    int a=tri[0],b=tri[1];
    if(a+b<=c) {
        return -1;
    }else if(a+c<=b) {
        return -1;
    }else if(b+c<=a) {
        return -1;
    }
    return a+b+c;
}

void dfs(int y,vector<int>triangle) {
    for(int i=0;i<n;i++) {
        if(!vis[i]) {
            if(y+1==3) {
                //cout<<triangle[0]<<" "<<triangle[1]<<" "<<aa[i]<<endl;
                ans=max(ans,summ(triangle,aa[i]));
                continue;
            }
            triangle.push_back(aa[i]);vis[i]=true;
            dfs(y+1,triangle);
            triangle.pop_back();vis[i]=false;
        }
    }
}

int main()
{
    cin>>T;
    while (T--) {
        fill(begin(aa),end(aa),0);
        fill(begin(vis),end(vis),false);
        ans=-1;
        cin>>n;
        for(int i=0;i<n;i++) {
            cin>>aa[i];
        }
        dfs(0,{});
        cout<<ans<<endl;
    }
    return 0;
}