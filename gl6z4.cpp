#include <iostream>

using std::cout;
using std::cin;
using std::endl;

const int strsize = 30;
const int num = 4;
struct bop
{
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
};
void func_menu();


int main()
{
    int i;
    char choice;
    bop members[num] = 
    {
        "Wimp Macho", "Junior", "Camel", 2, 
        "Raki Rhodes", "Middle", "Bah", 0, 
        "Celia Laiter", "Senior", "Fox", 1,
        "Hoppy Hipman", "Team lead", "Knight", 2
    };

    func_menu();

    do
    {
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice)
        {
            case 'a':
                for (i = 0; i < num; i++)
                    cout << members[i].fullname << endl;
                break;
            case 'b':
                for (i = 0; i < num; i++) 
                    cout << members[i].title << endl;
                break;
            case 'c':
                for (int i = 0; i < num; i++) 
                    cout << members[i].bopname << endl;
                break;  
            /*default: cout << "Please enter a, b, c, d or q\n"; 
                main();        */
        } 

        if (choice == 'd')
        {
            for( int i = 0; i < num; i++ )
                switch (members[i].preference)
                {
                    case 0: cout << members[i].fullname << endl;
                        break;
                    case 1: cout << members[i].title << endl;    
                        break;
                    case 2: cout << members[i].bopname << endl;     
                }
        }    

        if (choice == 'q')
            cout << "Bye!"; 
    } while (choice != 'q');

    cout << endl;
    return 0;
}

void func_menu()
{
    cout << "Benevolent Order of Programmers Report\n"
            "a. display by name\t\tb. display by title\n"
            "c. display by bopname\t\td. display by preference\n"
            "q. quit\n";
}