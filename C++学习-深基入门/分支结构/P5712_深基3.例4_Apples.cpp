#include <iostream>
using namespace std;
int n;
int main(){
    cin>>n;
    if (n==1){
        cout<<"Today, I ate 1 apple.";
    }else if (n==0){
        cout<<"Today, I ate 0 apple.";
    }else{
        cout<<"Today, I ate "<<n<<" apples.";
    }
    return 0;
}
// AC https://www.luogu.com.cn/record/169871584