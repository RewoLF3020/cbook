#include <iostream>
int main()
{
    using std::cin;
    using std::cout;

    char ch;
    cout << "Enter string:\n";
    cin.get(ch);

    while (ch != '.')
    {
        if (ch == '\n')
            cout << ch;
        else 
            cout << ++ch;
            //cout << ch + 1;
        cin.get(ch);        
    }
}