#include <iostream>
#include "stonewt.h"
#include "stonewt.cpp"

int main()
{
    /* Stonewt ai(1234);
    double a = ai * 100.0;
    double c = 100.0 * double(ai);
    Stonewt incognit = 275;
    Stonewt wolf(285.7);
    cout << "incognito: " << incognit << 
        "wolf: " << wolf << "\n"; 
    Stonewt summ;
    summ = incognit + wolf;
    cout << "Sum = " << summ << '\n';
    Stonewt differ = wolf - incognit;
    cout << "Difference = " << differ << "\n";    

    if (incognit > wolf)
        cout << "incognit > wolf\n";
    else 
        cout << "incognit > wolf\n";    
 */

    Stonewt mas[6] = {210, 140.8, 154};
    Stonewt comp(11, 0);

    double in_mas;
    for (int i = 3; i < 6; i++)
    {
        cout << "mas[" << i << "] = ";
        std::cin >> in_mas;
        mas[i] = in_mas;
    }    
    cout << "*************\n";

    for (int i = 0; i < 6; i++)
    {
        cout << "mas[" << i << "]: " << mas[i] << "\n";
    }

    int count = 0;
    Stonewt max = 0, min = mas[0];
    for (int i = 0; i < 6; i++)
    {
        if (mas[i] >= comp)
            count++;
        if (mas[i] > max)
            max = mas[i];
        if (mas[i] < min)
            min = mas[i];        
    }
    cout << "Amount of elements that >= than 11 stones: " << count << "\n";
    cout << "The biggest one: " << max << "\n";
    cout << "Minimum element: " << min << "\n";

    return 0;
}