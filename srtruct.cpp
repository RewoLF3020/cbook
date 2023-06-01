#include <iostream>
#include <string>
struct evening 
{
    std::string name;
    int imp;
    double price;
};
int main()
{
    using namespace std;
    evening one = {"He", 9, 1000.213};
    evening two = {"she", 8, 5000.3201};
    evening three = {"She", 10, 100000};
    evening ending = {"We just went for a walk"};

    cout << "Today's people list: " << one.name << ", " << two.name << " and " << three.name << endl;
    cout << "Their importans for me: " << one.imp << ", " << two.imp << " and " << three.imp << endl;
    cout << "present's costs: " << one.price << "$, " << two.price << "$ and " << three.price << "$" << endl; 
    cout << "Overal present's costs: " << one.price + two.price + three.price << "$" << endl;
    cout << ending.name << endl;
    return 0;
}