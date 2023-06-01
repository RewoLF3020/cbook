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

    inf *p = new inf;
    
    cout << "Enter diametr: ";
    cin >> (*p).d; cin.get();
    cout << "Enter Company: ";
    getline(cin, p->name);
    cout << "Enter Weight: ";
    cin >> (*p).weight;

    return 0;
}