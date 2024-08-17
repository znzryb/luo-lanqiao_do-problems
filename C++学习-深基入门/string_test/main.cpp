#include <iostream>
#include <string>
using namespace std;
int main()
{
    string one("Hello");
    string two(&one[0],&one[one.size()]);
    std::cout << two << std::endl;
    cout<< one[one.size()-1]<<endl;
    return 0;
}
