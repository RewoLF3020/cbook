#include "wine.h"


void Wine::GetBottles()
{
    std::cout << "Enter " << label << "data for "
        << years << " year(s):\n";

    for (int i = 0; i < years; i++)
    {
        std::cout << "Enter year: ";
        std::cin >> inf.first()[i];
        std::cout << "Enter bottles for that year:\n";
        std::cin >> inf.second()[i];
    }    
}


void Wine::Show() const
{
    std::cout << "Wine: " << Lable() << std::endl;
    std::cout << "\tYear\tBottles\n";
    for(int i = 0; i < years; i++)
    {
        std::cout << "\t" << inf.first()[i] 
        << "\t" << inf.second()[i] << "\n";
    }
}


int Wine::sum()
{
    return inf.second().sum();
}