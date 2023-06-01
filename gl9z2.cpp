#include <iostream>

void strcount(std::string &);
int main()
{
    std::string input;
    std::cout << "Enter a string: ";

    while (std::cin)
    {
        getline(std::cin, input);
        if (input == "")
            break;
        strcount(input);
    }

    return 0;
}

void strcount(std::string & str)
{
    int count = str.length(); 
    static int total = 0;
    total += count;
    std::cout << "\"" << str << "\" contains "
    << count << " characters\n";
    std::cout << total << " characters total\n";  
}