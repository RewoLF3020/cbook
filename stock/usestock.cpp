#include <iostream>
#include "stock.h"
#include "stock.cpp"

const int STKS = 4;

int main()
{
    Stock stocks[STKS] =
    {
        Stock("Nanosmart", 12, 20.0),
        Stock("Boffo objects", 200, 2.0),
        Stock("Monolitick Obelisk", 130, 3.25),
        Stock("Fleep Enterprices", 60, 6.5)
    };

    std::cout << "Stock holdings:\n";
    int st;
    for (st = 0; st < STKS; st++)
        std::cout << stocks[st];

    const Stock * top = &stocks[0];
    for (st = 1; st < STKS; st++)
        top = &top->topval(stocks[st]);

    std::cout << "\nMost valuable holdings:\n" << *top;

    return 0;
}