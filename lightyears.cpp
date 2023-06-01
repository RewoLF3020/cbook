#include <iostream>
using namespace std;
void ly_to_au(double);
int main()
{
    double ly;
    cout << "Enter the number of light years: ";
    cin >> ly;
    ly_to_au(ly);
    return 0;
}
void ly_to_au(double n)
{
    cout << n << " light years = " << n * 63240 << " astronomical units." << endl;
}