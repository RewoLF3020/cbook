#include <iostream>

template <class T>
T ShowArray(T arr[], int n);

template <class T>
T ShowArray(T * arr[], int n);

struct debts
{
    char name[50];
    double amount;
};

int main()
{
    int things[6] = {13, 31, 103, 301, 310, 130};
    struct debts mr_E[3] = 
    {
        {"Ima Wolfe", 2400.0},
        {"Ura Foxe", 1300.0},
        {"Iby Stout", 1800.0}
    };
    double * pd[3];

    for (int i = 0; i < 3; i++)
        pd[i] = &mr_E[i].amount;

    std::cout << "Listing Mr. E's counts of things:\n"    
    << "Sum of things: " << ShowArray(things, 6) << "\n"
    << "Amount of thigs: " << std::size(things) << "\n";

    std::cout << "Listing Mr. E's debts:\n"
    << "Sum of debts: " << ShowArray(pd, 3) << "\n";

    return 0;
}


template <class T>
T ShowArray(T arr[], int n)
{
    T summ = arr[0];

    for (int i = 1; i < n; i++)
        summ += arr[i];

    return summ;    
}


template <class T>
T ShowArray(T * arr[], int n)
{
    T summ = *arr[0];

    for (int i = 1; i < n; i++)
        summ += *arr[i];

    return summ;    
}