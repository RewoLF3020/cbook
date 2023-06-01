#include <iostream>

inline double mass(double density, double volume = 1.0)
{
    return density * volume;
}


int average(int a, int b)
{
    return (a + b) / 2;
} 


double average(double x, double y)
{
    return (x + y) / 2;
}

template <typename T>
T max(T a, T b)
{
    return a > b ? a : b;
}

void repeat(int, const char*);
void repeat(const char*);

int main()
{
    double den = 1500.0, vol = 3.5;
    std::cout << mass(den, vol) << "\n";
    std:: cout << mass(den) << "\n";

    const char* em = "I'm fine."; 
    repeat(10, em);
    std::cout << "*************\n";
    repeat(em);

    int a = 3, b = 6;
    double x = 3.0, y = 6.0;
    std::cout << average(a, b) << " "
    << average(x, y) << std::endl;

    std::cout << max(789.54, 45.5) << "\n";

    return 0;
}


void repeat(int n, const char* str)
{
    for (int i = 0; i < n; i++)
        std::cout << str << "\n";
}

void repeat(const char* str)
{
    for (int i = 0; i < 5; i++)
        std::cout << str << "\n";
}
/*double mass(double, double)
{

}*/

