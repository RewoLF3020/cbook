#include <iostream>
int stonetolb(int);
int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    int stone;
    std::cout << "Ener stones: ";
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << stone << " stones = ";
    cout << pounds << " pounds." << endl;
    return 0;
}
int stonetolb(int sts)
{
    return 14 * sts;
}