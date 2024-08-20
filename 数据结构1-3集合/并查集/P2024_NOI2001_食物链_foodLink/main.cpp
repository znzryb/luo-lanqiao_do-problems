#include <iostream>
#include <map>
#include <vector>
using namespace std;
const int maxn=5e4+10;
//        并查集所用的静态列表
int n,k,x,y,fa[maxn],cnt,op;

int findd(int x) {
    if(fa[x]==x) {
        return x;
    }else {
        fa[x]=findd(fa[x]);
        return fa[x];
    }
}

void unionn(int x,int y) {
    int originX=findd(x);
    int originY=findd(y);
    fa[originX]=originY;
}

int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++) {
        fa[i]=i;
    }
    for(int i=0;i<k;i++) {
        cin>>op>>x>>y;
        if(x>n or y>n) {
            cnt+=1;
            continue;
        }
        if(op==1) {
            unionn(x,y);



        }else {    //  下面是x吃y
            // 下面几个都是检查是否是假话
            if(x==y) {
                cnt+=1;
                continue;
            }
            // 如果是同类，不能互相吃
            if(findd(x)==findd(y)) {
                cnt+=1;
                continue;
            }
        }
    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
