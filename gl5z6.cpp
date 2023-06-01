#include <iostream>
//#include <string>
const int size = 12;
const int year = 3;
int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    long long sum = 0;
    const char* month[size] = 
    {
        "January",
        "February", "March",
        "April", "May", "June",
        "July", "August", "September",
        "October", "November", "December"
    };

    int salers [year][size];
    for (int j = 0; j < year; j++)
    {
        cout << j + 1 << " year: " << endl;
        for (int i = 0; i < size; i++)
        {
            cout << "Enter amount of books in " << *(month + i) << ": ";
            cin >> salers[j][i];
            cout << "__________________________________________________" << endl;
        }
    }

    long long allsum = 0;
    for (int i = 0; i < year; i++)
    {
        long long sum = 0;
        for (int j = 0; j < size; j++)
        {
            sum += salers[i][j];
        }
        cout << "Total sales for " << i + 1 << " year: " << sum << endl;
        allsum += sum;
    }
    cout << "All sales for " << year << " years: " << allsum << endl;

}






