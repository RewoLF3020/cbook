#ifndef HEAD_H_
#define HEAD_H_
#include <iostream>
#include <string>
#include <valarray>


template<class T1, class T2>
class Pair
{
    private:
        T1 a;
        T2 b;

    public:
        Pair() {}
        Pair(const T1 & aval, const T2 & bval) : a(aval), b(bval) {}
        T1 & first();
        T2 & second();
        T1 first() const { return a; }
        T2 second() const { return b; }
};


template<class T1, class T2>
T1 & Pair<T1, T2>::first()
{
    return a;
}


template<class T1, class T2>
T2 & Pair<T1, T2>::second()
{
    return b;
}


class Wine
{
    private:
        std::string label;
        typedef std::valarray<int> ArrayInt;
        typedef Pair<ArrayInt, ArrayInt> PairArray;
        PairArray inf;
        int years;

    public:
        Wine() : label("none"), years(0), inf() {} 
        Wine(const char * l, int y, const int yr[], const int bot[]) : label(l), years(y), inf(ArrayInt(yr, y), ArrayInt(bot, y)) {}
        Wine(const char * l, int y) : label(l), years(y), inf(ArrayInt(y), ArrayInt(y)) {}
        /* ~Wine() {} */
        void GetBottles();
        const std::string & Lable() const { return label; }
        int sum(); 
        const void Show() const;
};


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


const void Wine::Show() const
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

#endif