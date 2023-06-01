#include <iostream>

using std::cout;
using std::cin;
using std::endl;

double fact(int a);

int main()
{
    int n;
    cout << "Enter n:\n";
    while (cin >> n)
    {
        cout << n << "! = " << fact(n);
    }
   
}


double fact(int a)
{
    if (a == 0 || a == 1)
       return 1;

    return a * fact(a-1);   
}