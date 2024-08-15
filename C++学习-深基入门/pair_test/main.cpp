#include <iostream>
#include <vector>
using namespace std;
pair<int,double> pair_test;
vector<pair<int,double>> vec_pair;
int main()
{
    pair_test=make_pair(1,1.2);
    std::cout << pair_test.first <<" "<<pair_test.second<<std::endl;
    vec_pair.push_back(pair_test);
    cout<<vec_pair[0].first<<" "<<vec_pair[0].second<<endl;
    return 0;
}

