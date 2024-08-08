#include <iostream>
#include <algorithm>
using namespace std;
int n_stu,m_college,mid,stuScoreI,index1;int stu_score[100010],school_score[100010];

long long int sum_notSatisfy;

// int c=lower_bound(开始查询的位置【闭区间】，结束查询的位置【开区间】，查询的数)-数组指针;
// lower_bound属于C++内置STL的一种，可以实现在有序数组下进行二分查找，它可以用来找到第一个大于等于待查元素的值的位置。
// 功能：函数lower_bound()在first和last中的前闭后开区间进行二分查找，返回大于或等于val的第一个元素位置。如果所有元素都小于val，则返回last的位置.
// 注意：如果所有元素都小于val，则返回last的位置，且last的位置是越界的！！
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin>>m_college>>n_stu;
    for(int i=0;i<m_college;i++) {
        cin>>school_score[i];
    }
    for(int i=0;i<n_stu;i++) {
        cin>>stu_score[i];
    }
    sort(begin(school_score),begin(school_score)+m_college);
    sum_notSatisfy=0;
    for (int i=0;i<n_stu;i++) {
        stuScoreI=stu_score[i];
                // 返回第一个大于或等于待查数的值的索引
        index1=lower_bound(begin(school_score),begin(school_score)+m_college,stuScoreI)-school_score;
        if (index1==0) {  // 特判没有数字比stuScoreI还小（index-1会超指针，变为-号）
            sum_notSatisfy+=abs(school_score[index1]-stuScoreI);
        }else {
            sum_notSatisfy+=min(abs(school_score[index1]-stuScoreI),abs(school_score[index1-1]-stuScoreI));
        }
    }
    cout<<sum_notSatisfy<<endl;
}
// 自己想的hack 数据   https://www.luogu.com.cn/record/171258419
// 5 5
// 200 300 100 110 230
// 0 0 0 0 0
// 应输出500，我输出0

// AC https://www.luogu.com.cn/record/171260251

        // 自己写不出来了，打算用stl大法
//     }
//     sort(begin(school_score),begin(school_score)+m_college);
//     for (int i=0;i<n_stu;i++) {
//         stuScoreI=stu_score[i];
//         int left=0;int right=m_college-1;
//         while (left<right) {
//             mid=(left+right)/2;
//             if (school_score[mid]>stuScoreI) {
//                 right=mid;      // 如果使用mid-1会提前退出循环
//             }else if (school_score[mid]<stuScoreI) {
//                 left=mid+1;
//             }else if (school_score[mid]==stuScoreI) {
//                 break;
//             }
//         }
//         if (mid!=0) {
//             sum_notSatisfy+=min(abs(stuScoreI-school_score[mid]),abs(stuScoreI-school_score[mid-1]));
//         }else {
//             sum_notSatisfy=abs(stuScoreI-school_score[mid]);
//         }
//
//     }
//     cout<<sum_notSatisfy<<endl;
//     return 0;
// }
