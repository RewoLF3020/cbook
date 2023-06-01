#include <iostream>
int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    /*double prices[5] = {12.3, 45.6, 65.56, 45.23, 78.25};
    for (double x: prices)
        cout << x << endl;

    for (double &x: prices)
        cout << x * 0.8 << "\n";    

    int n;
    do
    {
        cout << "Enter n: ";  
        cin >> n;
    } while (n != 10);
    cout << "It's this" << endl;*/


    for (int x: {3, 45, 78, 7, 7})
        cout << x << " ";

}