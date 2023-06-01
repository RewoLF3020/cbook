#include <iostream>
int main()
{
    using namespace std;
    long long pop_z, pop_us;
    cout << "Enter the world's population: ";
    cin >> pop_z;
    cout << "Enter the US population: ";
    cin >> pop_us;
    double precent = (100.0 * pop_us) / pop_z;
    cout << "Yhe population of US is " << precent << "% " << " of the world population." << endl;
    return 0; 
}