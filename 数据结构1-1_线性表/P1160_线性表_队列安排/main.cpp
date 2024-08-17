#include <iostream>
using namespace std;
// 这题我还是先自己实现一个链表，不用stl list了
const int maxn=1e5+10;
int n,k,dir,m,x,llrr[2],indexx;

struct linkList{
    int left;
    int right;
}linkk[maxn];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin>>n;
    for(int i=2;i<=n;i++) {
        cin>>k>>dir;
        if(dir==0) {
            // 加入3插入到1 2 之间
            // 记录一下2的左右节点
            llrr[0]=linkk[k].left;llrr[1]=linkk[k].right;
            linkk[k].left=i;
            linkk[i].right=k;
            linkk[i].left=llrr[0];
            linkk[llrr[0]].right=i;
        }
        if(dir==1) {
            llrr[0]=linkk[k].left;llrr[1]=linkk[k].right;
            linkk[k].right=i;
            linkk[i].left=k;
            linkk[i].right=llrr[1];
            linkk[llrr[1]].left=i;
        }
    }
    cin>>m;
    for(int i=0;i<m;i++) {
        cin>>x;
        // 2 3 4 1 删3
        // 2的右边变为4
        linkk[linkk[x].left].right=linkk[x].right;
        linkk[linkk[x].right].left=linkk[x].left;
        linkk[x].left=0;linkk[x].right=0;
    }
    for(int i=1;i<=n;i++) {
        if(linkk[i].left==0 && linkk[i].right!=0) {
            indexx=i;
            break;
        }
    }
    cout<<indexx<<" ";
    while(linkk[indexx].right) {
        cout<<linkk[indexx].right<<" ";
        indexx=linkk[indexx].right;
    }
    return 0;
}
// https://www.luogu.com.cn/record/173316807