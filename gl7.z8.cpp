#include <iostream>
#include <array>
#include <string>

using namespace std;

const int Seasons = 4;
const char * Snames[Seasons] = {"Spring", "Summer", "Fall", "Winter"};

struct info
{
    double expences[Seasons];
};

void fill(info*);
void show(info*);

int main()
{
    info pay;
    fill(&pay);
    show(&pay); 

    return 0;
}


void fill(info * p)
{
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> p->expences[i];
    }
}


void show(info * p)
{
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": $" << p->expences[i] << endl;
        total += p->expences[i];
    }
    cout << "Total expenses: $" << total << endl;

}