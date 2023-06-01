#include <iostream>
#include <set>
//using namespace std;

int main()
{
    std::set<int> s = {1, 2, 3};
    int a[20] = {32, 545, 32, 5, 65, 43};
    
    for (auto e:s)
        std::cout << e << " ";
}
