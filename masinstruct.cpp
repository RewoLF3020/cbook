#include <iostream>
struct inf {
        std::string name;
        int age;
        float cost;
    };
int main() {
    using namespace std;
    inf student[3] = 
    {
        {"John", 19, 3650.89},
        {"Karla", 18, 4150.56},
        {"Alex", 20, 4000.0}
    };
    cout << "Some info about some students:\n" << "Name: " << student[0].name;
    cout << ". Age: " << student[0].age << ". Studying cost: $" << student[0].cost << endl;

    cout << "Name: " << student[1].name;
    cout << ". Age: " << student[1].age << ". Studying cost: $" << student[1].cost << endl;

    cout << "Name: " << student[2].name;
    cout << ". Age: " << student[2].age << ". Studying cost: $" << student[2].cost << endl;

    cout << "Their overal studying cost: $" << student[0].cost + student[1].cost + student[2].cost << endl;
    return 0; 
}