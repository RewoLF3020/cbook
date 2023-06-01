#include <iostream>
#include "plorg.h"
#include "plorg.cpp"

int main()
{
    Plorg betelgeusean;
    betelgeusean.showPlorg();
    
    betelgeusean.change_ind(100);
    betelgeusean.showPlorg();

    Plorg wolf("Wolfy", 150);
    wolf.showPlorg();
    
    wolf.change_ind(255);
    wolf.showPlorg();

    return 0; 
}