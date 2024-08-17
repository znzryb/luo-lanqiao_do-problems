#include <iostream>
#include <string>
using namespace std;
int main()
{
    string one("0");
    std::cout << static_cast<int>(one.size()) << std::endl;
    return 0;
}
