#include <iostream>
#include <iomanip>
#include <math.h>

// int 有十位
int s,v,t,h,m;
using namespace std;
int main()
{
    cin >> s >> v;
            // 只有小数与整数的结果是小数
    t = ceil(static_cast<double>(s)/v)+10;
    h = floor(t/60);
    m = t % 60;
    // 对无min的进行特判
    if (m==0){
        if (h<=8){
            cout<<0<<8-h<<":"<<"00";
        }else if(h>8 and h<=22){
            cout<<24-(h-8)<<":"<<"00";
        }else{                      // 不要打两个数字00
            cout<<0<<24-(h-8)<<":"<<"00";
        }
    }else{
        if (h<=7){
            if (m<=50){
                cout<<0<<8-h-1<<":"<<60-m;
            }else{
                cout<<0<<8-h-1<<":"<<"0"<<60-m;
            }  
        
        }else if(h>7 and h<=21){
            if (m<=50){
                cout<<24-(h-8)-1<<":"<<60-m;
            }else{
                cout<<24-(h-8)-1<<":"<<"0"<<60-m;
            }    
        }else{
            if (m<=50){
                cout<<"0"<<24-(h-8)-1<<":"<<60-m;
            }else{
                cout<<"0"<<24-(h-8)-1<<":"<<"0"<<60-m;
            }  
        }
    }
    return 0;
}
// AC https://www.luogu.com.cn/record/169820351