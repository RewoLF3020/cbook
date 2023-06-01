#include <iostream>
int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    int str;
    cout << "Enter number of strings: ";
    cin >> str;

    for (int i = 1; i <= str; i++)
    {
        for (int j = 0; j < str - i; j++)
            cout << ".";
        for (int k = 0; k < i; k++)
            cout << "*";
        cout << endl;    
    }
}