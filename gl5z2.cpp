#include <iostream>
#include <array>
int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    std::array<long double, 101> factorial;
    factorial[1] = factorial[0] = 1;

    for (int i = 2; i <= 100; i++)
        factorial[i] = factorial[i - 1] * i;

    for (int i = 0; i <= 100; i++)
        cout << "factorial " << i << " = " << factorial[i] << endl;     
}