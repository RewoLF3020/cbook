#include <iostream>
int fartoyard(int); 
int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    int farlong;
    cout << "Enter farlogs: ";
    cin >> farlong;
    int yards = fartoyard(farlong);
    cout << farlong << " farlogs = ";
    cout << fartoyard(farlong) << " yards." << endl;
    return 0;
}
int fartoyard(int sts) 
{
    return 220 * sts;
}