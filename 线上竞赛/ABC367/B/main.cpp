#include <iostream>
using namespace std;
string s;int cut_end;
int main()
{
    cin>>s;
    cut_end=s.size();
    for(int i=s.size()-1;i>0;i--) {
        if(s[i]=='0')
            cut_end=i;
        else
            break;
    }
    string sout(&s[0],&s[cut_end]);
    if(sout[sout.size()-1]=='.') {
        string sout2(&s[0],&s[cut_end-1]);
        cout<<sout2;
    }else {
        cout<<sout;
    }
    return 0;
}
// AC '\b'输出不太好