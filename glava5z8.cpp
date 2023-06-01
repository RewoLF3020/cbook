/*#include <iostream>
#include <cstring>
const int size = 40; 
int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    char word[size];
    int count = 0;
    cout << "Enter words (to end enter 'done'): " << endl;
    do 
    {
        cin >> word;
        count++;
    }
    while (strcmp(word, "done"));

    cout << "You entered " << count - 1 << " words." << endl;
}*/







#include <iostream>
#include <cstring>
const int size = 40; 
int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    char word[size];
    int count = 0;
    cout << "Enter words (to end enter 'done'): " << endl;
    while (strcmp(word, "done"))
    {
        cin >> word;
        count++;
    }

    cout << "You entered " << count - 1 << " words." << endl;
}