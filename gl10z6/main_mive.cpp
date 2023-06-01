#include <iostream>
#include "move.h"
#include "move.cpp"

int main()
{
    Move car(4500.50, 4500.25);
    car.showmove();

    car.reset();
    car.showmove();

    car.reset(2000, 900);
    car.showmove();

    /*car.add(car);
    car.showmove();*/

    Move plane(9500, 8000);
    plane.showmove();

    plane.add(car);
    plane.showmove();

    return 0;
}