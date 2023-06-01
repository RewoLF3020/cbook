#include <iostream>

const int size = 5;

template <class T>
T max5(T mass[]);

int main()
{
    int m[size] = {1, 323, 32, 45, 7};
    double mas[size] = {453.415, 45.45, 45.21, 789.5, 999.9};
    std::cout << max5(m) << "\n";
    std::cout << max5(mas) << "\n";

    return 0;
}


template <class T>
T max5(T mass[])
{
    T maxx = mass[0]; 
    
    for (int i = 1; i < size; i++)
    {
        if (mass[i] > maxx)
            maxx = mass[i];
    }

    return maxx;
}