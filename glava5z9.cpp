#include <iostream>
#include <cstring>
int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    std::string word;
    int count = 0;
    cout << "Enter words (enter 'done' to stope): " << endl;
    do
    {
        cin >>  word;
        count++;
    }
    while (word != "done");

    cout << "You entered " << count - 1 << " words." << endl;
    
}