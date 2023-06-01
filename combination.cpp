#include <iostream>
struct antarct_year_end 
{
    int year;
};
int main()
{
    using std::cout;
    using std::endl;
    
    antarct_year_end s1, s2, s3;
    s1.year = 1998;
    antarct_year_end *pa = &s2;
    pa->year = 1999;

    antarct_year_end trio[3] = {s1, s2, s3};
    trio[0].year = 2003;
    cout << trio->year << endl;

    const antarct_year_end *arp[3] = {&s1, &s2, &s3};
    cout << arp[1]->year << endl;
    const antarct_year_end ** ppa = arp;
    auto ppb = arp;
    cout << (*arp)->year << endl;
    cout << (*(ppb+1))->year << endl;
    return 0;

}
