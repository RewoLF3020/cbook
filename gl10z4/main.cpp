#include <iostream>
#include "sales.cpp"
#include "sales.h"

int main()
{
    using namespace SALES;

    int size;
    std::cout << "Enter amount of quarters(no more than 4): ";
    std::cin >> size;
    double sums[size];

    for (int i = 0; i < size; i++)
        {
            std::cout << "Enter total sales for the " << i+1 << " quarter: ";
            std::cin >> sums[i];
        }
    std::cout << "***********Second year*********\n";    

    Sales s1(sums, size); 
    Sales s2;

    s2.setSales();
    s1.showSales();
    s2.showSales();

    return 0;
}