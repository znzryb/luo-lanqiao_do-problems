#include <iostream>
#include <string>
using namespace std;
long long int T,n,digit_generator_value,ans;
int main()
{
    cin>>T;
    while(T--) {
        cin>>n;
        string n_string=to_string(n);
        ans=0;      // 初始化
        for(int i=n-n_string.size()*9;i<=n;i++) {
            digit_generator_value=i;    // 初始化
            string i_string=to_string(i);
            for(auto ch:i_string) {
                digit_generator_value+=ch-'0';
            }
            if(digit_generator_value==n) {
                ans=i;
                break;
            }
        }
        cout<<ans<<endl;
    }
}
// https://vjudge.net.cn/solution/53370998