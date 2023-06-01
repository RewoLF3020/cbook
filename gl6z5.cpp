#include <iostream>
#include <cctype>
int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    int fin;
    double nal;
    
    do
    {
        cout << "Enter your finance: ";
        cin >> fin;
        auto sl =  isdigit(fin);
        if (fin > 0 && fin < 10000)
            nal = 0.0;
        else if (fin >= 10000 && fin < 20000)
            nal = (fin - 5000) * 0.1;   
        else if (fin >= 20000 && fin <= 35000)
            nal = 10000 * 0.1 + (fin - 15000) * 0.15;
        else if (fin > 35000)
            nal = 10000 * 0.1 + 20000 * 0.15 + (fin - 35000) * 0.2;

        cout << "Taxation is " << nal << endl;      
    } while (fin > 0);
}