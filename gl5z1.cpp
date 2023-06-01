#include <iostream>
int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    int a, b;
    cout << "Enter a, b: " << endl;
    cin >> a >> b;

    int sum = 0;
    for (a; a <= b; a++)
        sum += a;
    cout << sum << endl;    

    return 0;
}