#include <iostream>
struct inf
{
    std::string name;
    float d;
    float weight;
};
int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    inf pizza;
    cout << "Enter Company: ";
    getline(cin, pizza.name);
    cout << "Enter diametr: ";
    cin >> pizza.d;
    cout << "Enter Weight: ";
    cin >> pizza.weight;

    /*cout << " " << endl;

    cout << pizza.name << endl;
    cout << pizza.d << endl;
    cout << pizza.weight << endl;*/
}