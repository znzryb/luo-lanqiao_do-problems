#include <iostream>
#include <map>
using namespace std;
int n,q,op,score;
string name;
map<string,int> stuScore;
int main()
{
    cin>>q;
    while(q--) {
        cin>>op;
        if(op==1) {
            cin>>name>>score;
            stuScore[name]=score;
            cout<<"OK"<<endl;
        }else if(op==2){
            cin>>name;
            if(stuScore.count(name))
                cout<<stuScore[name]<<endl;
            else
                cout<<"Not found"<<endl;
        }else if(op==3) {
            cin>>name;
            if(stuScore.count(name)) {
                stuScore.erase(name);
                cout<<"Deleted successfully"<<endl;
            }else {
                cout<<"Not found"<<endl;
            }
        }else if(op==4) {
            cout<<stuScore.size()<<endl;
        }
    }
    return 0;
}
// AC https://www.luogu.com.cn/record/173512719