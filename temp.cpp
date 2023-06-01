#include <iostream>
using namespace std;
void c_to_f(double);
int main()
{
    double cel;
    cout << "Enter Celsius value: ";
    cin >> cel;
    c_to_f(cel);
    return 0;
}
void c_to_f(double n)
{
    cout << n << " degrees Celsius is " << n * 1.8 + 32 << " degrees Fahrenheit" << endl;
}