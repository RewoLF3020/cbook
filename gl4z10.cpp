#include <iostream>
#include <array>
int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::array;

    array<float, 4> res;
    cout << "Enter first result: ";
    cin >> res[0];
    cout << "Enter second result: ";
    cin >> res[1];
    cout << "Enter third result: ";
    cin >> res[2];

    res[3] = (res[0] + res[1] + res[2]) / 3;
    
    cout << "Result's: " << endl;
    cout << "First: " << res[0] << endl;
    cout << "Secong: " << res[1] << endl;
    cout << "Third: " << res[2] << endl;
    cout << "Total result: " << res[3] << endl;    
}