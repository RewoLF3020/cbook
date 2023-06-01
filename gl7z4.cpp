#include <iostream>

using std::cin;
using std::cout;
using std::endl;

long double probability(int numbers, int picks, int meg_n);

int main()
{
    double total, choices, mega;
    cout << "Enter the total number of choices,\n"
        "number of picks and number of mega nums: ";

    while ((cin >> total >> choices) >> mega && choices <= total)
    {
        cout << "You have propability one in ";
        cout << probability(total, choices, mega);
        cout << "\n Next two numbers: ";

        return 0;
    }    
}


long double probability(int numbers, int picks, int meg_n)
{
    long double result = 1.0;
    long double n, p;

    for (n = numbers, p = picks; p > 0; n--, p--)
        result *= n / p;

    return result * meg_n;
}