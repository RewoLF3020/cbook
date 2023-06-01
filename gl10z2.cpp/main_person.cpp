#include <iostream>
#include "Person.h"
#include "person.cpp"

int main()
{
    Person one;
    Person two("Smythecraft");
    Person three("Dimwiddy", "Sam");

    one.show();
    std::cout << std::endl;
    one.formalShow();

    two.show();
    std::cout << std::endl;
    two.formalShow();

    three.show();
    std::cout << std::endl;
    three.formalShow();
}