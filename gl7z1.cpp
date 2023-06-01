#include <iostream>

using std::cout;
using std::cin;

double func_g(int x, int y) {return 2.0 * x * y / (x+ y);}

int main()
{
    int a, b;
    cout << "Enter a, b:\n";
    cin >> a >> b;

    while (a != 0 && b != 0)
    {
        double c = func_g(a, b);
        cout << c << "\n" <<
        "Enter a, b:\n";
        cin >> a >> b;
    } 
}

