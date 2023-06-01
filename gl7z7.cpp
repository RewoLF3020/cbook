#include <iostream>

using std::cout;
using std::cin;
using std::endl;

const int Max = 5;

double* fill_array(double * begin, double * end);
void show_array(double * begin, double * end);
void revalue(double r, double * begin, double * end);

int main()
{
    double properties[Max];
    double *end_ptr = fill_array(properties, properties + 5);
    show_array(properties, end_ptr);
    if (end_ptr != properties)
    {
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor))
        {
            cin.clear();
            while (cin.get() != '\0')
                continue;
            cout << "Bad input. Enter a number: ";    
        }
        revalue(factor, properties, end_ptr);
        show_array(properties, end_ptr);
    }
    cout << "Done" << endl;
}


double* fill_array(double * begin, double * end)
{
    double * pt;
    double temp;
    int i = 1;
    for (pt = begin; pt != end; pt++)
    {
        cout << "Enter value #" << i << ": ";
        cin >> temp;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\0')
                continue;
            cout << "Input terminated.\n";
            break;    
        }
        else if (temp < 0)
            break;
        *pt = temp; 
        i++;
    }
    return pt;
}


void show_array(double * begin, double * end)
{
    double *pt;
    for (pt = begin; pt != end; pt++)
    {
        int i = 1;
        cout << "Property #" << i << ": $";
        cout << *pt << endl;
        i++;
    }
        
}


void revalue(double r, double * begin, double * end)
{
    double *pt;
    for (pt = begin; pt != end; pt++)
        *pt *= r;
}