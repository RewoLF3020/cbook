#ifndef wine
#define wine
#include "pairs.cpp"
#include<valarray>


class Wine
{
    private:
        typedef std::valarray<int> ArrayInt;
        typedef Pair<ArrayInt, ArrayInt> PairArray;
        
        PairArray inf;
        std::string label;
        int years;

    public:
        Wine() : label("none"), years(0), inf() {} 
        Wine(const char * l, int y, const int yr[], const int bot[]) : label(l), years(y), inf(ArrayInt(yr, y), ArrayInt(bot, y)) {}
        Wine(const char * l, int y) : label(l), years(y), inf(ArrayInt(y), ArrayInt(y)) {}
        /* ~Wine() {} */
        void GetBottles();
        const std::string & Lable() const { return label; }
        int sum(); 
        void Show() const;
};

#endif