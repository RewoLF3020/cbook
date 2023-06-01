#include <iostream>
#include "sales.h"

namespace SALES
{
    double Sales::min(const double ar[], int n)
    {
        double minn = ar[0];
        for (int i = 1; i < n; i++)
            if (ar[i] < minn)
                minn = ar[i];
        return minn;        
    }

    double Sales::max(const double ar[], int n)
    {
        double maxx = ar[0];
        for (int i = 1; i < n; i++)
            if (ar[i] > maxx)
                maxx = ar[i];
        return maxx;        
    }

    double Sales::average(const double ar[], int n)
    {
        double summ = ar[0], aver;
        for (int i = 1; i < n; i++)
            summ += ar[i];
        aver = summ / n;  
        return aver;
    }

    Sales::Sales(const double ar[], int n)
    {
        for (int i = 0; i < n; i++)
            client.sales[i] = ar[i];
        
        client.min = min(ar, n);        
        client.max = max(ar, n);  
        client.average = average(ar, n);
    }

    void Sales::setSales()
    {
        for (int i = 0; i < QUARTERS; i++)
        {
            std::cout << "Enter total sales for the " << i+1 << " quarter: ";
            std::cin >> client.sales[i];
        }

        client.min = min(client.sales, QUARTERS);
        client.max = max(client.sales, QUARTERS);
        client.average = average(client.sales, QUARTERS);
    }

    void Sales::showSales()
    {
        for (int i = 0; i < QUARTERS; i++)
        {
            std::cout << "Total sales for the " << i+1 << " quarter: ";
            std::cout << client.sales[i] << "\n";
        }

        std::cout << "Minimum: $" << client.min << "\n";
        std::cout << "Maximum: $" << client.max << "\n";
        std::cout << "Average: $" << client.average << "\n";
    }
}