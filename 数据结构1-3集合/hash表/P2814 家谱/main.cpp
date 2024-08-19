#include <iostream>
#include <map>
using namespace std;
string s,fa;
map <string,string> family;

string find_fa(string s) {
    if(family[s]==s) {
        return s;
    }else {
        family[s]=find_fa(family[s]);
        return family[s];
    }
}

int main()
{
    while (true) {
        cin>>s;
        if(s[0]=='$') {
            return 0;
        }
        string name(&s[1],&s[s.size()]);
        if(s[0]=='#') {
            if(family.find(name)==end(family)) {
                family[name]=name;
            }
            fa=name;
        }else if(s[0]=='+'){
            family[name]=fa;
        }else if(s[0]=='?') {
            cout<<name<<" "<<find_fa(name)<<endl;
        }
    }
    return 0;
}
// AC https://www.luogu.com.cn/record/173578572