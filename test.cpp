#include <iostream>

int main()
{
    char a[5];
    std::cout << "Enter a:\n";
    std::cin >> a;
    std::cout << "a: " << a << std::endl;

    /* while (std::cin.get() != '\n')
        continue; */
    
    char b[10];
    std::cout << "Enter b:\n";
    std::cin >> b;
    std::cout << "b: " << b;
}