#include <iostream>
const int s = 10;
int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    double n[s];
    int i = 0, m_aver = 0;
    double summ = 0;
    cout << "Enter donations: ";
    while ((cin >> n[i]))
        i++;

    for (int j = 0; j < i; j++)
        summ += n[j]; 

    double aver = summ / i;
    cout << "Average num is " << aver << endl;
    
    for (int j = 0; j < i; j++)
    {
        if (n[j] > aver)
            m_aver++;
    }
    cout << "Amount of numbers that more than average: " << m_aver << endl;
    return 0;

}       



