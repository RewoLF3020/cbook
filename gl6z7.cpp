#include <iostream>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int v, c, other;
    v = c = other = 0;
    std::string word;

    cout << "Enter words: " << endl;
    
    while (cin >> word && word != "q")
    {
        if (isalpha(word[0]))
        {
            switch (word[0])
            {
                case 'a': case 'A':
                case 'e': case 'E':
                case 'i': case 'I':
                case 'o': case 'O':
                case 'u': case 'U':
                case 'y': case 'Y': v++;
                break;
                default: c++; 
            }
        }
        else  other++;                   
    }

    cout << v << " words beginning with voewls" << endl;
    cout << c << " words beginning with consonants" << endl;
    cout << other << " others" << endl;

    return 0;
}