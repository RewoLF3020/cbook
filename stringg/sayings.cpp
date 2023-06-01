#include <iostream>
#include <cstdlib>
#include "string1.h"
#include "string1.cpp"

const int ArSize = 10;
const int MaxLen = 81;

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    String name;
    cout << "Hi, what's your name?\n>>";
    cin >> name;
    cout << name << ", please enter up to " << ArSize 
    << " short sayings <empty to quit>:\n";
    String sayings[ArSize];
    char temp[MaxLen];
    int i;

    for (i = 0; i < ArSize; i++)
    {
        cout << i + 1 << ": ";
        cin.get(temp, MaxLen);
        while (cin && cin.get()!= '\n')
            continue;
        if (!cin || temp[0] == '\0')
            break;
        else 
            sayings[i] = temp;        
    } 

    int total = i;
    if (total > 0)
    {
        cout << "Here are your sayings:\n";
        for (i = 0; i < total; i++)
            cout << sayings[i] << endl;

        String * shortest = &sayings[0];
        String * first = &sayings[0];
        for (i = 1; i < total; i++)
        {
            if (sayings[i].length() < shortest->length())
                shortest = &sayings[i];
            if (sayings[i] < *first)
                first = &sayings[i];    
        }    
        cout << "Shortest saying:\n" << *shortest << endl;
        cout << "First alphabetically:\n" << *first << endl;
        srand(time(0));
        int choice = rand() % total;
        String * favorite = new String(sayings[choice]);
        cout << "My favorite saying:\n" << *favorite << endl;
        delete favorite;
        /* cout << "This program used " << String::HowMany() 
        << " String objects. Bye.\n"; */  
    }
    else 
        cout << "No input!\n";

    String s1 = "Just ";
    String s2 = "do it";    
    String sum_s = s1 + s2;
    cout << sum_s << endl;
    sum_s.stringup();
    cout << sum_s << endl;

    String s3 = "RFJ4EJFNFL";
    s3.stringlow();
    cout << s3 << endl;

    String s4 = "rrrhjkhrrrhjhrrrR";
    int num = s4.similar('r');
    cout << "Num of 'r': " << num << endl; 
    return 0;    
}