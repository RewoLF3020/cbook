#include <iostream>
int main()
{
    using namespace std;
    const int arr_size = 100;
    char a[arr_size];
    char b[arr_size];
    cout << "Enter some info: \n";
    cin.get(a, arr_size).get();
    cout << "Enter smth else: \n";
    cin.get(b, arr_size).get();
    cout << "Main inf: " << a << endl;
    cout << "Extra inf: " << b << endl;
    return 0;
}