#include <iostream>
#include <map>
#include <string.h>
using namespace std;
long long int T;string seq;char seqs[110];char anss[110];
// 记住字典序实际上不大能抽象为数值直接比较
// 可以以不断打擂台的方式更新答案序列

void update_anss(int i) {
    if(i==0) {
        for(int j=0;j<seq.size();j++) {
            anss[j]=seqs[j];
        }
    }else {
        for(int j=0;j<seq.size();j++) {
            if(anss[j]>seqs[j]) {           // 就是打擂台
                for(int k=0;k<seq.size();k++) {
                    anss[k]=seqs[k];
                }
                return;
            }else if(anss[j]<seqs[j]) {     // 如果seqs还没有anss优，直接返回
                return;;
            }else if(anss[j]==seqs[j]){
                continue;
            }
        }
    }

}

int main()
{
    cin>>T;
    while(T--) {
        cin>>seq;
        for(int i=0;i<seq.size();i++) {
            // 遍历所有可能序列
            for(int j=0;j<seq.size();j++) {
                if((i+j)>=seq.size()) {     // 环状序列位移算法
                    seqs[j]=seq[i+j-seq.size()];
                }else {
                    seqs[j]=seq[i+j];
                }
            }
            update_anss(i);
        }
        for(int i=0;i<seq.size();i++) {
            cout<<anss[i];
        }
        cout<<endl;
        memset(anss,'\0',sizeof(anss));     // 初始化
    }
    return 0;
}
// AC https://vjudge.net.cn/solution/53374783