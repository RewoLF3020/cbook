#include <iostream>
int a_in_m(int);
int main()
{
    using namespace std;
    int age;
    cout << "Enter age: ";
    cin >> age;
    int month = a_in_m(age);
    cout << "Your age in month: " << month << endl;
    return 0;
}
int a_in_m(int n)
{
    return n * 12;
}