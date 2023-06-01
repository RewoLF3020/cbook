#include <iostream>
const int size = 16;
int main()
{
    long long factorial[size];
    factorial[1] = factorial[0] = 1;

    for (int i = 2; i < size; i++)
        factorial[i] = i * factorial[i-1];
    for (int i = 0; i < size; i++)
        std::cout << i << "! = " << factorial[i] << std::endl;

    int a = 0;
    while (a++ < 10)
        std::cout << a << " ";    

    std::cout << std::endl;    

    int c = 10, d = 0;

    for (int i = 0; i < 10; i++)
        c--, d++;   
    std::cout << c << " " << d << std::endl;    

}