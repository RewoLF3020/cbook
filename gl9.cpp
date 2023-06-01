#include <iostream>


namespace Dev
{
    int cost;
    double pay;
    struct Hill;
}

int pay = 100;

int main()
{
    //using Dev::pay;
    using namespace Dev;
    double pay = 150.0;
    double total = pay + ::pay;
    std::cout << "total = " << total << "\n";

}