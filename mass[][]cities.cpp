#include <iostream>
const int Cities = 5;
const int Years = 4;
int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    const char *cities[Cities] =                    
    {
        "Gribble",
        "Gribbletown",
        "New Gribble",
        "San Gribble",
        "Gribble Vista"
    };
    int max_temps[Years][Cities] = 
    {
        {96, 100, 87, 101, 105},
        {96, 98, 91, 107, 104},
        {97, 101, 93, 108, 107},
        {98, 103, 101, 109, 104}
    };

    cout << "Maximum temperatures for 2008 - 2011\n\n";

    for (int city = 0; city < Cities; ++city)
    {
        cout << cities[city] << ":\t";
        for (int year = 0; year < Years; ++year)
            cout << max_temps[year][city] << "\t";
        cout << endl;
    }    

    return 0;        
}