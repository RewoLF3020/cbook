#include <iostream>
#include <string>
int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    using std::string;

    const int size = 20;
    string name1, name2, str3;
    cout << "Enter your first name: ";
    getline(cin, name1);
    cout << "Enter your last name: ";
    cin >> name2;
    string p = {", "};
    str3 = name1 + p + name2;
    cout << "Here's the information in a single string: " << str3 << endl;
    return 0;
}