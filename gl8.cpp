#include <iostream>

struct freet
{
    int attemp;
};

void display(const freet & ft);
freet & accum(freet & target, const freet & sourse);

int main()
{
    freet one = {10};
    freet two = {45};
    freet three = {789};
    freet four = {7};
    freet five = {11};
    freet team = {0};

    display(accum(accum(accum(accum(accum(team, one), two), three), four), five));
}


void display(const freet & ft)
{
    std::cout << "Attempts: " << ft.attemp << std:: endl;
}


freet & accum(freet & target, const freet & sourse)
{
    target.attemp += sourse.attemp;
    return target;
}