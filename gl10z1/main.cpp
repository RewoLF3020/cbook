#include <iostream>
#include "bank.h"
#include "bank.cpp"

const int CLIENTS = 3;

int main()
{
    Bank clients[CLIENTS] = 
    {
        Bank("Warren Buffet", "7W23EG378Q", 230000.4151),
        Bank("Ilon Mask", "J2K3N3N243L2", 4500000.0),
        Bank("Alex Elder", "N3KLRN43LTN45TN", 755458.45)
    };

    std::cout << "Client's information:\n";

    for (int i = 0; i < CLIENTS; i++)
        clients[i].show();

    clients[0].add(1200000.0);
    clients[1].remove(275482.500);
    clients[2].remove(13131531351);   
}