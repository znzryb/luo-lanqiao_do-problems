// #include <iostream>
// #include <vector>
// #include <map>
// #include <unordered_set>
// using namespace std;
//
// struct fiveData {
//     pair<int,int> upQueen;
//     unordered_set<int> allQueenX;
//     unordered_set<int> allQueenY;
//     unordered_set<int> minus_cross;
//     unordered_set<int> plus_cross;
// }five_data;
//
// int n,x,y,fut_x,fut_y,cnt;bool mapp[18][18];
// pair<int,int> position,pyx,fut_pyx;
// vector< fiveData > stack;
// unordered_set<int> minus_cross;
// unordered_set<int> plus_cross;
//
// fiveData make_fiveData(fiveData five_data,pair<int,int> position) {
//     int local_x,local_y;
//     local_y=position.first;
//     local_x=position.second;
//     five_data.upQueen=position;
//     five_data.allQueenX.insert(local_y);
//     five_data.allQueenY.insert(local_x);
//     five_data.minus_cross.insert(local_y-local_x);
//     five_data.plus_cross.insert(local_y+local_x);
//     return five_data;
// }
//
// int main()
// {
//     cin>>n;
//     cnt=0;
//     for(int i=0;i<n;i++) {
//         //     y    x
//         position=make_pair(0,i);
//         make_fiveData(five_data,position);
//         stack.push_back(five_data);
//         while(stack.empty()==0) {
//             five_data=stack[stack.size()-1];
//             stack.pop_back();
//             y=five_data.upQueen.first;
//             x=five_data.upQueen.second;
//             if(y==n) {
//                 cnt+=1;
//                 for(int j=0;j<n;j++) {
//                     fut_x=j;
//                     fut_y=y+1;
//                     fiveData local_five_data;
//                     //  不能同列以及同对角线
//                     if (five_data.plus_cross.count(fut_x+fut_y)==0 and five_data.minus_cross.count(fut_y-fut_x)==0
//                         and five_data.allQueenX.count(fut_x)==0 and fut_y<n) {
//                         fut_pyx=make_pair(fut_y,fut_x);
//                         local_five_data=make_fiveData(five_data,fut_pyx);
//                         stack.push_back(local_five_data);
//                         }
//                 }
//             }
//         }
//     }
//     cout<<cnt;
//     return 0;
// }
