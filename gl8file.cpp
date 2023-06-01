#include <iostream>
#include <fstream>
#include <cstdlib>
using std::cout;
using std::cin;

void file_it(std::ostream & os, double fo, const double fe[], int n);
const int limit = 5;

int main()
{
    std::ofstream fout;
    const char * fn = "ep-data.txt";
    fout.open(fn);

    if (!fout.is_open())
    {
        cout << "Can't open " << fn << std::endl;
        exit(EXIT_FAILURE);
    }

    double objective;
    cout << "Enter focal length of your " 
            "telescope objective in mm: ";
    cin >> objective;
    double eps[limit];
    cout << "Enter the focal length of " << limit << " eyepieces:\n";

    for (int i = 0 ; i < limit; i++)
    {
        cout << "Eyepiece #" << i + 1 << ": ";
        cin >> eps[i];
    }

    file_it(fout, objective, eps, limit);
    file_it(cout, objective, eps, limit);
    cout << "Done\n";

    return 0;
}


void file_it(std::ostream & os, double fo, const double fe[], int n)
{
    std::ios_base::fmtflags initial;
    initial = os.setf(std::ios_base::fixed);
    os.precision(0);
    os << "Fotal length of objective: " << fo << " mm\n";
    os.setf(std::ios::showpoint);
    os.precision(1);
    os.width(12);
    os  << "f.l. eyepiece";
    os.width(15); 
    os << "magnification" << std::endl;

    for (int i = 0; i < n; i++)
    {
        os.width(12);
        os << fe[i];
        os.width(15);
        os << int (fo / fe[i] + 0.5) << std::endl;
    }

    os.setf(initial);
}