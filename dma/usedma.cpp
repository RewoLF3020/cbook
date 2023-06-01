#include <iostream>
#include "dma.h"
#include "dma.cpp"

const int SIZE = 4;

int main()
{
    using std::cout;
    using std::endl;

    baseDMA shirt("Portabelly", 8);
    lacksDMA balloon("red", "Blimpo", 4);
    hasDMA map("Mercator", "Buffalo Keys", 5);
    cout << "Displaying baseDMA object:\n";
    cout << shirt << endl;
    cout << "Displaying lacksDMA object:\n";
    cout << balloon << endl;
    cout << "Displaying hasDMA object:\n";
    cout << map << endl;
    lacksDMA balloon2(balloon);
    cout << "Result of lacksDMA copy:\n";
    cout << balloon2 << endl;
    hasDMA map2;
    map2 = map;
    cout << "Result of hasDMA copy:\n";
    cout << map2 << endl;

    ABC * ptr[SIZE];
    ptr[0] = new baseDMA(shirt);
    ptr[1] = new lacksDMA(balloon);
    ptr[2] = new lacksDMA(balloon2);
    ptr[3] = new hasDMA(map);

    for (int i = 0; i < SIZE; i++)
        cout << *ptr[i] << endl;
    
    for (int i = 0; i < SIZE; i++)
        delete ptr[i];
    
    return 0;
}