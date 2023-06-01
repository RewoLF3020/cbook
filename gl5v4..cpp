#include <iostream>
int main()
{
    using std::cout;
    /*int j = 5;
    while (++j < 9)
        cout << j++ << std::endl; 
    cout << j;     */

    for (int n = 1; n <=64; n *= 2)
    cout << n << " ";

    int x = (1,024);
    cout << x << " ";

    int y;
    y = 1,024;
    cout << y;    
}