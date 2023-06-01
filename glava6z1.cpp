#include <iostream>
#include <cctype>
int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    char str;
    cout << "Enter string: ";
    while (cin.get(str) && str != '@')
    {
        if (!(isdigit(str)))
        {
            if (isalpha(str))
            {
                if (islower(str))
                    cout << char(toupper(str));
                else if (isupper(str))
                    cout << char(tolower(str));    
            }
        }    
    }
}
