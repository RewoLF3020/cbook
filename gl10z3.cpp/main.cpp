#include <iostream>
#include <cstring>
#include "golf.cpp"
#include "golf.h"

const int SLEN = 20;

int main()
{   
    Golf players[3] = 
    {
        Golf("Alex Eld", 25),
        Golf("Ilon Mask", 12),
        Golf("Kirk Wallent", 23)
    };

       /* std::cout << "Fill the data:\n";
        for (int i = 1; i < n; i++)
        if (!players[i].setgolf())
            break;*/

    for (int i = 0; i < 3; i++)
        players[i].showgolf();

    int n;
    std::cout << "Enter amount of players in second group: ";
    std::cin >> n;
    Golf sec_play[n];
    std::cout << "Entering new data:\n";

    for (int i = 0; i < n; i++)
    {
        char new_name[SLEN];
        int hand;
        std::cout << "Enter name: "; std::cin.get();
        //std::cin >> g.fullname;
        std::cin.getline(new_name, SLEN);
        /*if (!strlen(new_name))
            break;*/
        std::cout << "Enter handicap: ";
        std::cin >> hand;
        sec_play[i] = Golf(new_name, hand);  
    }       

    for (int i = 0; i < n; i++)
        sec_play[i].showgolf();
    
    for (int i = 0; i < 3; i++)
    {
        int hand;
        std::cout << "Enter new handicaps for first group: ";
        std::cin >> hand;
        players[i].handicap(hand);
    }

    for (int i = 0; i < 3; i++)
        players[i].showgolf();

    int m;
    std::cout << "Enter amount of players in third group: ";
    std::cin >> m;
    Golf thr_play[m];

    for (int i = 0; i < m; i++)
        thr_play[i].setgolf();

    for (int i = 0; i < m; i++)
        thr_play[i].showgolf();    

    return 0;
}