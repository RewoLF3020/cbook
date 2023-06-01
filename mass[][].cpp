#include <iostream>
int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    int mass[6][8];
    int el = 1;

    for (int m = 0; m < 6; m++)
    {
        for (int n = 0; n < 8; n++)
        {
            
            mass[m][n] = el++;
            if (n == 7)
            {
                el = 1;
                cout << "a[" << m + 1 << "][" << n + 1 << "]= " << mass[m][n] << "  ";
                cout << endl;
            }    
            else    
            cout << "a[" << m + 1 << "][" << n + 1 << "]= " << mass[m][n] << "  ";
        }
    }            
}    