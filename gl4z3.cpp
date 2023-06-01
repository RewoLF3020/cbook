#include <iostream>
#include <cstring>
int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    using std::string;

    const int size = 20;
    char name1[size], name2[size];
    cout << "Enter your first name: ";
    cin.getline(name1, size);
    cout << "Enter your last name: ";
    cin >> name2;

    strcat(name1, ", ");
    strcat(name1, name2);
    cout << "Here's the information in a single string: " << name1 << endl;
    return 0;
}