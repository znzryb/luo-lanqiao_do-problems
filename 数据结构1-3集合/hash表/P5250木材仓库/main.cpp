#include <iostream>
#include <set>
#include <cmath>
using namespace std;
long long int n,lenn;short int op;
set<long long int> warehouseWood;
set <long long int>::iterator itup,itlow;
int main() {
    cin>>n;
    for(long long int i=0;i<n;i++) {
        cin>>op>>lenn;
        if(op==1) {
            if(warehouseWood.count(lenn)==1)
                cout<<"Already Exist"<<endl;
            else
                warehouseWood.insert(lenn);
        }else if(op==2) {
            if(!warehouseWood.empty()) {
                itup=warehouseWood.lower_bound(lenn);
                if(itup==warehouseWood.end()) {
                    itup=itlow=prev(itup);
                }else if(itup==warehouseWood.begin()){
                    itlow=itup;
                }else {
                    itlow=prev(itup);
                }

                if(abs(lenn-*itlow)<=abs(lenn-*itup)) {
                    cout<<*itlow<<endl;
                    warehouseWood.erase(itlow);
                }else {
                    warehouseWood.erase(itup);
                    cout<<*itup<<endl;
                }
            }else {
                cout<<"Empty"<<endl;
            }
        }
    }
    return 0;
}
// AC https://www.luogu.com.cn/record/173458104
// hack 数据
// 5
// 1 2
// 1 3
// 2 4    lower_bound 返回了最后找到的指针，即set末尾，导致空指针，RE