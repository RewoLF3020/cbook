#include <iostream>
int main ()
{
    using namespace std;
    int km, litr;
    cout << "Enter kilometrs: ";
    cin >> km;
    cout << "Enter litres: ";\
    cin >> litr;
    float k = km / 100.0;
    float rashod = litr / k;
    cout << "Fuel consuption is " << rashod << "l/100km." << endl;
    return 0;
}