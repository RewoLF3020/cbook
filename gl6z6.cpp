#include <iostream>

using std::cout;
using std::cin;
using std::endl;

const int size = 20;
struct don
{
    char name[size];
    double summ;
};

int main()
{
    int num, count1 = 0, count2 = 0;
    cout << "Enter number of patrons: ";
    cin >> num;
    don * mass = new don[num];

    cout << "Enter names and donations:" << endl;

    for (int i = 0; i < num; i++)
    {
        cout << "Name: ";
        cin >> mass[i].name; cin.get();
        cout << "Donation: ";
        cin >> mass[i].summ;
    }

    cout << "Grand Patrons: " << endl;

    for (int i = 0; i < num; i++)
    {
        if (mass[i].summ >= 10000)
        {
            cout << mass[i].name << " $" << mass[i].summ << endl;
            count1++;
        }    
    } 

    if (count1 == 0)
        cout << "None" << endl;

    cout << "Patrons: " << endl;

    for (int i = 0; i < num; i++)
    {
        if (mass[i].summ < 10000)
        {
            cout << mass[i].name << " $" << mass[i].summ << endl;
            count2++;
        }    
    }    

    if (count2 == 0)
        cout << "None" << endl;
}
