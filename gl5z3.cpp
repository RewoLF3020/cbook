#include <iostream>
int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    double a, sum = 0.0;

    cout << "Enter numbers: " << endl;

    while (a != 0)
    {
        cin >> a;
        sum += a;
        cout << "sum = " << sum << endl;
    }
}