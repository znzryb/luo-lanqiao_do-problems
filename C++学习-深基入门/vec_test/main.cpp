#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> vec_test;vector<int> position;
int main()
{
    position.push_back(114);position.push_back(514);
    vec_test.push_back(position);
    cout<<vec_test[0][0]<<vec_test[0][1]<<endl;
    cout<<vec_test.size()<<endl;
    vec_test.pop_back();
    cout<<"empty: "<<vec_test.empty();
}
