#include <iostream>
#include "complex0.h"
#include "complex0.cpp"

int main()
{
    using std::cout;

    Complex a(3.0, 4.0);
    Complex c;
    cout << "Enter a complex number (q to quit):\n";

    while (std::cin >> c)
    {
        cout << "c is " << c << "\n";
        cout << "complex conjugate is " << ~c << "\n";
        cout << "a is " << a << "\n";
        cout << "a + c is " << a + c  << "\n";
        cout << "a - c is " << a - c << '\n';
        cout << "a * c is " << a * c << '\n';
        cout << "2 * c is " << 2 * c << "\n";
        cout << "c * 2 is " << c * 2 << "\n";
        cout << "Enter a complex number (q to quit):\n";
    } 

    cout << "Done!" << '\n';
    return 0;
}