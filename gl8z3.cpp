#include <iostream>
#include <cctype>
#include <cstring>

using std::string;
using std::cout;
using std::cin;

string & to_upper(string & s);

int main()
{
    string str;
    cout << "Enter string:\n";
    while (true)
    {
        getline(cin, str);

        if (str != "q")
            cout << to_upper(str) << std::endl;
        else 
        {
            cout << "Bye.\n";
            break;
        }     
    }
}


string & to_upper(string & s)
{
    char * ch = new char[s.length() + 1];
    strcpy(ch, s.c_str());

    for (int i = 0; i < s.length(); i++)
        {
            ch[i] = toupper(ch[i]);
            s[i] = ch[i];
        } 

    delete [] ch;
    return s;        
}