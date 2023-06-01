#include <iostream>
int main()
{
    char address[80];
    int a, b;
    std::cout << "Enter b: ";
    std::cin >> b; std::cin.get();
    std::cout << "Enter address: ";
    std::cin.getline(address, 80);
    //std::cin >> address;
    std::cout << "Enter a: ";
    std::cin >> a;
    std::cout << address << std::endl;
}