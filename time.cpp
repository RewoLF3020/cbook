#include <iostream>
using namespace std;
void time(int, int);
int main()
{
    int hours;
    cout << "Enter the number of hours: ";
    cin >> hours;
    int miin;
    cout << "Enter number of minutes: ";
    cin >> miin;
    time(hours, miin);
    return 0;
}
void time(int h, int m)
{
    cout << "Time " << h << ":" << m << endl;
}