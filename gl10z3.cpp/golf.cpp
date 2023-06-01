#include <iostream>
#include <cstring>
#include "golf.h"

Golf::Golf(const char * name, int hc)
{
    strcpy(player.fullname, name);
    player.handicap = hc;
}


int Golf::setgolf()
{

    //int flag = 0;
    std::cout << "Enter name: "; std::cin.get();
    char nname[LEN];
    std::cin.getline(nname, LEN);
    //std::cin.getline(player.fullname, LEN);
    //if (strlen(player.fullname))
        //flag = 1;
    std::cout << "Enter handicap: ";
    //std::cin >> player.handicap;
    int hand;
    std::cin >> hand;
    Golf temp(nname, hand);
    *this = temp;

    //return flag; 
    return 0;   
} 


void Golf::handicap(int hc)
{
    player.handicap = hc;
}


void Golf::showgolf() const
{
    std::cout << "Name: " << player.fullname << "\n";
    std::cout << "Handicap: " << player.handicap << "\n";
}