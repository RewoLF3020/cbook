#ifndef HEAD2_H_
#define HEAD2_H_
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


typedef std::valarray<int> ArrayInt;
typedef Pair<ArrayInt, ArrayInt> PairArray;

class Wine : private PairArray, private std::string
{
    private:
        int years;
    public:
        Wine() : std::string("none"), years(0), PairArray() {}
        Wine(const char * l, int y, const int yr[], const int bot[]) : std::string(l), years(y), PairArray(ArrayInt(yr, y), ArrayInt(bot, y)) {}
        Wine(const char * l, int y) : std::string(l), years(y), PairArray(ArrayInt(y), ArrayInt(y)) {}    
        void GetBottles();
        const std::string & Label() const { return (const std::string &)*this; }
        void Show() const;
        int sum();
        /* PairArray & operator=(const PairArray & pa); */
};


void Wine::GetBottles()
{
    std::cout << "Enter " << (const std::string)*this << " data for "
        << years << " year(s):\n";

    for (int i = 0; i < years; i++)
    {
        std::cout << "Enter year: ";
        std::cin >> PairArray::first()[i];
        std::cout << "Enter bottles for that year:\n";
        std::cin >> PairArray::second()[i];
    }
}


void Wine::Show() const
{
    std::cout << "Wine: " << Label() << std::endl;
    std::cout << "\tYear\tBottles\n";
    for(int i = 0; i < years; i++)
    {
        std::cout << "\t" << PairArray::first()[i] 
        << "\t" << PairArray::second()[i] << "\n";
    }
}


int Wine::sum()
{
    return PairArray::second().sum();
}

#endif