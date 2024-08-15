#include <iostream>
#include <vector>
using namespace std;
const int maxn=100;
int n,cnt=0;
bool minus_cross[maxn],plus_cross[maxn],column[maxn];   // [maxX]
vector<int> a;

void dfs(int y) {       // Queen y行放在哪里
    if(y>n) {
        cnt++;
        // 输出前3个答案
        if(cnt<=3) {
            for(int i=0;i<n;i++) {
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }
        // 放在y行的第j位
    for(int j=1;j<=n;j++) {
        if(column[j]==false and minus_cross[y-j+n]==false and plus_cross[y+j]==false) {
            // 占位
            a.push_back(j);
            minus_cross[y-j+n]=true;
            plus_cross[y+j]=true;
            column[j]=true;
            dfs(y+1);
            // 复位
            a.pop_back();
            minus_cross[y-j+n]=false;
            plus_cross[y+j]=false;
            column[j]=false;
        }
    }
}

int main() {
    cin>>n;
    dfs(1);
    cout<<cnt<<endl;
    return 0;
}

// 87% https://www.luogu.com.cn/record/172586979
// P1219 n皇后问题，第一次没AC，一个点TLE了，怀疑是array的索引比我的unorderedset插入效率高
// AC https://www.luogu.com.cn/record/172597131


// #include <iostream>
// #include <vector>
// using namespace std;
// const int maxn = 100;
// int n, cnt = 0, cnt_order = 0;
// bool column[maxn], minus_cross[2 * maxn], plus_cross[2 * maxn]; // [maxX]
// vector<int> a;
//
// void dfs(int y) {       // Queen y行放在哪里
//     if (y > n) {
//         cnt++;
//         // 输出前3个答案
//         if (cnt <= 3) {
//             for (int i = 0; i < n; i++) {
//                 cout << a[i] << " ";
//             }
//             cout << endl;
//         }
//         return;
//     }
//     // 放在y行的第j位
//     for (int j = 1; j <= n; j++) {
//         if (!column[j] && !minus_cross[y - j + n] && !plus_cross[y + j]) {
//             // 占位
//             a.push_back(j);
//             minus_cross[y - j + n] = true;
//             plus_cross[y + j] = true;
//             column[j] = true;
//             dfs(y + 1);
//             // 复位
//             a.pop_back();
//             minus_cross[y - j + n] = false;
//             plus_cross[y + j] = false;
//             column[j] = false;
//         }
//     }
// }
//
// int main() {
//     cin >> n;
//     if (n <= 0 || n > maxn) {
//         cout << "Invalid input!" << endl;
//         return 1;
//     }
//     dfs(1);
//     cout << cnt << endl;
//     return 0;
// }