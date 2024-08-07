// #include <iostream>
// #include <algorithm>
// using namespace std;
// int a[5][2]={{1,2},{3,2},{1,7}};
// bool cmp(int a[2],int b[2]) {
//     if (a[0]>b[0]) {
//         return true;
//     }if (a[1]>b[1]) {
//         return true;
//     }
// }
// int main()
// {
//     sort(begin(a),end(a),cmp);
//     std::cout << "Hello, World!" << std::endl;
//     return 0;
// }


// gpt生成的代码，也不太能运行
// #include <iostream>
// #include <algorithm>
//
// using namespace std;
//
// // 修正比较函数，使用 const 引用并返回 bool
// bool cmp(const int a[2], const int b[2]) {
//     if (a[0] != b[0]) {
//         return a[0] > b[0]; // 按第一列降序排序
//     }
//     return a[1] > b[1]; // 如果第一列相同，按第二列降序排序
// }
//
// int main()
// {
//     int a[5][2] = {{1,2}, {3,2}, {1,7}};
//
//     sort(begin(a), end(a), cmp);
//
//     // 输出排序后的结果
//     for (int i = 0; i < 5; ++i) {
//         cout << a[i][0] << " " << a[i][1] << endl;
//     }
//
//     return 0;
// }
// //

// vector变量是可以的  https://blog.csdn.net/leelitian3/article/details/79293058
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool cmp(vector<int> a, vector<int> b)
{
    if(a[0] != b[0]) return a[0] > b[0];
    if(a[1] != b[1]) return a[1] > b[1];
    if(a[2] != b[2]) return a[2] > b[2];
}

int main()
{
    vector<vector<int>> vec = { {1,4,3}, {1,4,7} , {1,3,5} , {2,9,4} , {2,5,8} , {3,9,6} };

    sort(vec.begin(), vec.end(), cmp);

    for(auto p : vec)
        cout<<p[0]<<' '<<p[1]<<' '<<p[2]<<endl;

    return 0;
}