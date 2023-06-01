/*#include <iostream>
int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    int count = 0;
    char ch;
    cout << "Enter text: " <<endl;
    //cin.get(ch);
    //while (ch != '#')
    //while (cin)
    //while(cin.eof()==false)

    while (cin.get(ch))
    {
        cout << ch;
        ++count;
        cin.get(ch);
    }

    cout << endl << count << " symbols read" << endl;

    return 0;
}*/

#include <iostream>
int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    int ch, count = 0;
    while ((ch = cin.get()) != EOF)
    {
        cout.put(char(ch));
        ++count;
    }

    cout << endl << count << " chararcters";
    return 0;
}