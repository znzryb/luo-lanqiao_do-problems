#include <iostream>
#include <cstdio>
#include <stdlib.h>
#include <math.h>
#include <string>
using namespace std;
string s;int ans;
// 减48可以转化为int
int main(){
    cin>>s;
    ans=0;
    int count=1;
    for (int i=0;i<11;i++){
        if (s[i]!='-'){
            // cout<<"s[i]ASC"<<static_cast<int>(s[i])<<endl; 0转化为ASC码就是48
            ans+=(s[i]-48)*count;
            count+=1;
            // cout<<"s[i]"<<s[i]<<endl;
            // cout<<ans<<endl;

        }
    }
    ans=ans%11;
    // cout<<ans<<endl;
    if (s[12]!='X'){
        if ((s[12]-48)==ans){
            cout<<"Right"<<endl;
        }else{
            if (ans!=10){
                for (int j=0;j<12;j++)
                    cout<<s[j];         // 如果只有一行大括号可以省略
                cout<<ans<<endl;
            }else{
                for (int j=0;j<12;j++)
                    cout<<s[j];         // 如果只有一行大括号可以省略
                cout<<"X"<<endl;
            }
            
        }
    }else{
        if (ans==10){
            cout<<"Right"<<endl;
        }else{
            for (int j=0;j<12;j++)
                cout<<s[j];
            cout<<ans<<endl;
        }
    }
    
}

// AC https://www.luogu.com.cn/record/170017678