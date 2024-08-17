#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int n,vis[25],l,r,maxSize=0;
string ss[25];
char c;

bool check(string s,string s_,int len_merge) {
    for(int i=0;i<len_merge;i++) {
        if(s[s.size()-len_merge+i]!=s_[i]) {
            return false;
        }
    }
    return true;
}

//      选取第x个单词
void dfs(string s,int cnt) {
    //                     函数没有隐式类型转换
    maxSize=max(maxSize,static_cast<int>(s.size()));
    for(int j=0;j<n;j++) {
        if(vis[j]<=0) {
            continue;
        }
        // cout<<cnt<<" : "<<s<<endl;
        if(cnt==0 && ss[j][0]==c) {
            vis[j]-=1;
            dfs(ss[j],cnt+1);
            vis[j]+=1;
        }else {
            // 以下是在merge
            bool is_merge=false;
            for(int i=1;i<min(s.size(),ss[j].size());i++) {
                if(check(s,ss[j],i)) {
                    is_merge=true;
                    r=i;
                    break;
                }
            }
            if(is_merge) {
                string one(&s[0],&s[s.size()]);
                string two(&ss[j][r],&ss[j][ss[j].size()]);
                // cout<<cnt<<" one: "<<one<<" two: "<<two<<endl;
                vis[j]-=1;
                dfs(one+two,cnt+1);
                vis[j]+=1;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>ss[i];
    }
    cin>>c;
    for(int i=0;i<25;i++) {
        vis[i]=2;
    }
    // 初始化以及输入

        //  这个s不重要，随便传个0，因为cnt==0时我都不会用到s。
    dfs("0",0);
    cout<<maxSize<<endl;
}

// AC https://www.luogu.com.cn/record/173014985