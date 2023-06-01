#include <iostream>
struct car 
{
    std::string maker;
    int year;
};
int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    int amount;
    cout << "How many cars should we paste in cataloge? ";
    cin >> amount;

    car *mass = new car[amount];
    for (int i = 0; i < amount; i++)
    {
        cout << "Car #" << i + 1 << ": " << endl;
        cout << "Enter manufacturer: "; cin.get();
        getline(cin, mass->maker);
        cout << "Enter year of manufacture: ";
        cin >> mass->year;
        mass++;
    }

    cout << "Your colllection: " << endl;
    for (int i = 0; i < amount; i++)
    {
        mass--;
        cout << mass->year << " " << mass->maker << endl;
    }    
}