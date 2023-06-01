#include <iostream>
#include <cstring>
const int amount = 5;

template <class T>
T maxn(T mass[], int size);

template <> const char* maxn(const char * m[], int num);

int main()
{
    int m[6] = {1, 323, 32, 45, 7, 321};
    double mas[4] = {453.415, 45.45, 789.5, 999.9};
    std::cout << maxn(m, std::size(m)) << "\n";
    std::cout << maxn(mas, std::size(mas)) << "\n";

    const char* st[amount] = {"rff", "grgrdgr", "fefeffefe", "s", "dae"};
    std::cout << maxn(st, amount);

    return 0;
}


template <class T>
T maxn(T mass[], int size)
{
    T maxx = mass[0]; 

    for (int i = 1; i < size; i++)
    {
        if (mass[i] > maxx)
            maxx = mass[i];
    }

    return maxx;
}


template <> const char* maxn(const char * m[], int num)
{
    const char* biggest = m[0]; 

    for (int i = 1; i < num; i++)
    {
        if (strlen(m[i]) > strlen(biggest))
            biggest = m[i];
    }

    return biggest;
}