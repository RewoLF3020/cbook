#include <iostream>
#include "port.h"
#include "port.cpp"

int main()
{
    using std::cout;
    using std::endl;

    Port p1("Ruby", "tawny", 20);
    VintagePort p2("Porto", 10, "Portugal", 1978);
    cout << "Collections:\n";
    cout << p1 << endl << p2 << endl;
    p1.Show();
    p2.Show();

    p1 += 11;
    p2 += 22;
    p1.Show();
    p2.Show();

}