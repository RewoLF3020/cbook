#include <iostream>
#include "Person.h"
#include <cstring>

Person::Person (const std::string & ln, const char * fn)
{
    lname = ln;
    strcpy(fname, fn);
}


void Person::show() const
{
    std::cout << "Last name: " << lname << "\n";
    std::cout << "First name: " << fname << "\n";
}


void Person::formalShow() const
{
    std::cout << "First name: " << fname << "\n";
    std::cout << "Last name: " << lname << "\n";
}