#include <iostream>
#include "cow.h"
#include "cow.cpp"

int main()
{
    Cow cow;
    Cow scared("Karla", "football", 55);
    scared.ShowCow();
    cow = scared;
    Cow * p_cow = new Cow;
    *p_cow = scared;
    Cow obj3(*p_cow);
    cow.ShowCow();
    p_cow->ShowCow();
    obj3.ShowCow();
}