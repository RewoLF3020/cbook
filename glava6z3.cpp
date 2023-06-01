#include <iostream>
using namespace std;

void func_menu();

int main()
{
    func_menu();
    char choice;
    cin >> choice;
    switch (choice)
    {
        case 'c': cout << "Volve, tiger, hyena...\n";
            break;
        case 'p': cout << "Frederic Chopin\n";
            break;
        case 't': cout << "Baobab\n";
            break;
        case 'g': cout << "witcher\n";
            break;       
        default: cout << "Please enter c, p, t or g\n";   
            main();   
    }
}


void func_menu()
{
    cout << "Please enter one of the following choices:\n"
    "c) carnivore   p) pianist\n"
    "t) tree        g) game\n";
}
  