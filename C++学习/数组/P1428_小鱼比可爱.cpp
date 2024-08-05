#include <iostream>
using namespace std;
int n;
int ans[101];
int a[101];
int main(){
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i=0;i<n;i++){
        int ans_element=0;
        for(int j=0;j<i;j++){
            if (a[i]>a[j]){
                ans_element+=1;
            }  
        ans[i]=ans_element;
        }
    }
    for (int i=0;i<n;i++) cout<<ans[i]<<" ";
}
// AC https://www.luogu.com.cn/record/170028208


// #include <iostream>
// using namespace std;
// int n;
// // int ans[101];
// // int a[101];
// int main(){
//     cin>>n;
//     int a[n],ans[n];
//     for (int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     for (int i=0;i<n;i++){
//         int ans_element=0;
//         for(int j=0;j<i;j++){
//             if (a[i]>a[j]){
//                 ans_element+=1;
//             }  
//         ans[i]=ans_element;
//         }
//     }
//     for (int i=0;i<n;i++) cout<<ans[i]<<" ";
// }

// #include <iostream>
// using namespace std;
// int n;
// int main(){
    
//     cin>>n;
//     int ans[n];
//     int a[n];
//     for (int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     for (int i=0;i<n;i++){
//         int ans_element=0;
//         for(int j=0;j<i;j++){
//             if (a[i]>a[j]){
//                 ans_element+=1;
//             }  
//         ans[i]=ans_element;
//         }
//     }
//     for (int i=0;i<n;i++) cout<<ans[i]<<" ";
// }