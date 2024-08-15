// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;
// int n,maxsize=0,sizee;string ss[110],s,s_after;
//
// void isOut(int i,int j) {
//     if(j!=0) {
//         s_after=ss[j-1];
//         if(i<s_after.size()) {
//             cout<<"*";
//         }
//     }
// }
//
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0);cout.tie(0);
//     cin>>n;
//     for(int i=0;i<n;i++) {
//         cin>>ss[i];
//         sizee=ss[i].size();
//         maxsize=max(maxsize,sizee);
//     }
//     for(int i=0;i<maxsize;i++) {
//         for(int j=n-1;j>=0;j--) {
//             s=ss[j];
//             if(i>=s.size()) {
//                 isOut(i,j);
//             }else {
//                 cout<<s[i];
//             }
//         }
//         if(i!=maxsize-1)
//             cout<<endl;
//     }
//     return 0;
// }


#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int n, maxsize = 0, currentSize; // Renamed 'size' to 'currentSize'
string ss[110], s;

bool check(int i,int j) {
    for(int k=j;k>=0;k--) {
        if (ss[k].size()>i) {
            return true;
        }
    }
    return false;
}

void isOut(int i, int j) {
    if (j != 0) {
        if (check(i,j)) {
            cout << "*";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> ss[i];
        currentSize = ss[i].size(); // Updated variable name to 'currentSize'
        maxsize = max(maxsize, currentSize);
    }

    for (int i = 0; i < maxsize; i++) {
        for (int j = n - 1; j >= 0; j--) {
            s = ss[j];
            if (i >= s.size()) {
                isOut(i, j);
            } else {
                cout << s[i];
            }
        }
        cout << endl;
    }

    return 0;
}

// AC https://atcoder.jp/contests/abc366/submissions/56566478
// AC https://vjudge.net.cn/solution/53387341
// 原先未通过时的 hack数据
// 3
// abfgjj
// bbghh
// yyuu
// yba
// ybb
// ugf
// uhg
// *hj
// *j
