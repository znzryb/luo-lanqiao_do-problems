#include <cstdio>
#include <string>
#include <iostream>
// #include <bits/stdc++.h>
// https://www.luogu.com.cn/problem/P5730
// XXX...X.XXX.XXX.X.X.XXX.XXX.XXX.XXX.XXX
// X.X...X...X...X.X.X.X...X.....X.X.X.X.X
// X.X...X.XXX.XXX.XXX.XXX.XXX...X.XXX.XXX
// X.X...X.X.....X...X...X.X.X...X.X.X...X
// XXX...X.XXX.XXX...X.XXX.XXX...X.XXX.XXX
using namespace std;
int n;int number[110];char a;
string first_row[10]={"XXX","..X","XXX","XXX","X.X","XXX","XXX","XXX","XXX","XXX"};
string secon_row[10]={"X.X","..X","..X","..X","X.X","X..","X..","..X","X.X","X.X"};
string third_row[10]={"X.X","..X","XXX","XXX","XXX","XXX","XXX","..X","XXX","XXX"};
string forth_row[10]={"X.X","..X","X..","..X","..X","..X","X.X","..X","X.X","..X"};
string fifth_row[10]={"XXX","..X","XXX","XXX","..X","XXX","XXX","..X","XXX","XXX"};
int main()
{
    cin>>n;
    // cin>>n;
    // getchar();
    for(int i=0;i<n;i++) {
        cin>>a;
        // int value=a-'0';
        number[i]=static_cast<int>(a)-static_cast<int>('0');;          //static_cast<int>(a)-static_cast<int>('0');
    }
    for (int i=0;i<5;i++) {
        for(int j=0;j<n;j++) {
            if(i==0) {
                int num=number[j];
                if (j==n-1) {
                    // printf("%s",first_row[num].c_str());
                    cout<<first_row[num];
                }else {
                    // printf("%s.",first_row[num].c_str());
                    cout<<first_row[num]<<".";
                }
            }else if(i==1) {
                int num=number[j];
                if (j==n-1) {
                    // printf("%s",secon_row[num].c_str());
                    cout<<secon_row[num];
                }else {
                    // printf("%s.",secon_row[num].c_str());
                    cout<<secon_row[num]<<".";
                }
            } else if(i==2) {
                int num=number[j];
                if (j==n-1) {
                    // printf("%s",third_row[num].c_str());
                    cout<<third_row[num];
                }else {
                    // printf("%s.",third_row[num].c_str());
                    cout<<third_row[num]<<".";
                }
            }else if(i==3) {
                int num=number[j];
                if (j==n-1) {
                    // printf("%s",forth_row[num].c_str());
                    cout<<forth_row[num];
                }else {
                    // printf("%s.",forth_row[num].c_str());
                    cout<<forth_row[num]<<".";
                }
            } else if(i==4) {
                int num=number[j];
                if (j==n-1) {
                    // printf("%s",fifth_row[num].c_str());
                    cout<<fifth_row[num];
                }else {
                    // printf("%s.",fifth_row[num].c_str());
                    cout<<fifth_row[num]<<".";
                }
            }
        }
        cout<<""<<endl;
    }
    return 0;
}
// 6
// 114514
// AC https://www.luogu.com.cn/record/171038515