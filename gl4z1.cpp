#include <iostream>
#include <cstring>
int main()
{
    const int size = 15;
    using std::cout;
    using std::cin;
    using std::endl; 
    using std::string; 

    /*char name1[size];
    char name2[size];*/
    string name1, name2;
    cout << "What is your first name? ";
    //std::cin.getline(name1, size);
    getline(cin,name1);
    cout << "What is your last name? ";
    cin >> name2;
    cout << "What letter grade do you deserve? ";
    cout << name1[0] << endl;
    int age;
    cout << "What is your age? ";
    cin >> age;

    cout << "Name: " << name2 << ", " << name1 << endl;
    cout << "Grade: C" << endl;
    cout << "Age: " << age << endl;

    return 0;

}