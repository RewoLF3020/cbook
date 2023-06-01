/*weight >= 115 && weight < 125
ch = 'q' || ch = 'Q'
x % 2 == 0 && x != 26
x % 2 == 0 && x % 26 != 0
donation >= 1000 && donation =< 2000 || guest == 1*/

#include <iostream>
#include <cctype>

int main()
{
   /* char ch;
    std::cout << "Enter ch: ";
    //while (ch = std::cin.get()) {}
    ch = std::cin.get(); 
    if (islower(ch) || isupper (ch))
    //if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        std::cout << "Done" << std::endl;
    else 
        std::cout << "Error" << std::endl;   */


    using std::cin;
    using std::cout;
    using std::endl;
    int line = 0;
    char ch;
   /*while (cin.get(ch))
    {
        if (ch == 'Q')
            break;
        if (ch != '\n')
            continue;
        line++;     
    }   */

    while (cin.get(ch) && ch != 'Q')
    {
        if (ch == '\n')
            line++;
    }
    cout << line << endl;


}
