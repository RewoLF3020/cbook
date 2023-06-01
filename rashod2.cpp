#include <iostream>
int main ()
{
    using namespace std;
    float ras_eu, ras_us;
    const float to_mile = 62.14;
    const float to_gal = 3.875;
    cout << "Enter fuel consuption in eu form: ";
    cin >> ras_eu;
    ras_us = to_mile / (ras_eu / to_gal);
    cout << ras_eu << " l/100km = " << ras_us << " mile/gallon" << endl;
    return 0;
}