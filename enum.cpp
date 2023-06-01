#include <iostream>
enum bits {one = 1, two, sec = 2, one_h = 100, n, ent, red};

struct things
{
    int bad = 777;
    int good;
    char name[20];
    float volume;
    double price;
};

int main() 
{
    using namespace std;
    cout << two << ", " << n << endl;
    bits a;
    a = bits(127);
    cout << a << endl;

    cout << "" << endl;
    
    things *ptr = new things; 
    cout << (*ptr).good << " " << ptr->bad << endl;
    
    cout << "Enter name: ";
    cin.get(ptr->name, 20);
    cout << "Enter volume: ";
    cin >> (*ptr).volume;
    cout << "Enter price: $ ";
    cin >> ptr->price;
    delete ptr;
    return 0;
}