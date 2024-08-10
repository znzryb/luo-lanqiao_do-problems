#include <iostream>
#include <map>
#include <string>
#include <cmath>
using namespace std;
map<char,char> map_reverse={{'A','A'},{'E','3'},{'3','E'},{'H','H'},{'I','I'},{'J','L'},{'L','J'},
    {'O','O'},{'S','2'},{'2','S'},{'T','T'},{'U','U'},{'V','V'},{'W','W'},{'X','X'},{'Y','Y'},
{'Z','5'},{'5','Z'},{'8','8'},{'M','M'},{'1','1'}};
string s;bool isRegularPalindrome,isMirroredString;
int main()
{

    while(cin>>s) {
        int i=0,j=s.size()-1;
        bool whetherBreak=false;
        while (i<j) {
            if (map_reverse[s[i]]!=s[j]) {
                whetherBreak=true;
                break;
            }
            i+=1;j-=1;
        }
        if(whetherBreak==false)
            isMirroredString=true;
        else
            isMirroredString=false;

        if(s.size()%2!=0 and (map_reverse[s[floor(s.size()/2.0)]]!=s[floor(s.size()/2.0)])) {         // 对奇数长度进行一个特判
            isMirroredString=false;
        }

        whetherBreak=false;
        i=0,j=s.size()-1;       // 记得要重新初始化
        while (i<j) {
            if (s[i]!=s[j]) {
                whetherBreak=true;
                break;
            }
            i+=1;j-=1;
        }

        if(whetherBreak==false)
            isRegularPalindrome=true;
        else
            isRegularPalindrome=false;

        if(isRegularPalindrome==true and isMirroredString==true) {
            cout<<s<<" -- is a mirrored palindrome."<<endl;
        }else if(isRegularPalindrome==false and isMirroredString==false) {
            cout<<s<<" -- is not a palindrome."<<endl;
        }else if(isRegularPalindrome==true and isMirroredString==false) {
            cout<<s<<" -- is a regular palindrome."<<endl;
        }else if(isRegularPalindrome==false and isMirroredString==true) {
            cout<<s<<" -- is a mirrored string."<<endl;
        }
        cout<<endl;
    }
    return 0;
}
// AC https://vjudge.net.cn/solution/53356182