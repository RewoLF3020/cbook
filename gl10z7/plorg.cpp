#include <iostream>
#include <cstring>
#include "plorg.h"

Plorg::Plorg(const char * name, int index)
{
    strcpy(fullname, name);
    CI = index;
}


void Plorg::change_ind(int index)
{
    CI = index;
}


void Plorg::showPlorg()
{
    std::cout << "Name: " << fullname << "\n";
    std::cout << "Contentment index(CI): " << CI << "\n";
}