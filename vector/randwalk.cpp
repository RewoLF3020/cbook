#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vect.h"
#include "vect.cpp"
#include <fstream>

int main()
{
    using namespace std;
    using VECTOR::Vector;
    ofstream fout;
    fout.open("thewalk.txt");
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    cout << "Enter target distance (q to quit): ";

    while (cin >> target)
    {
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;
        fout << "Target distance: " << target
             << ", step size: " << dstep << endl;
        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
            fout << steps << ": " << result << endl;
        }    
        fout << "After " << steps << " steps the subject " 
               " has the following location:\n";
        //cout << result << endl;
        fout << result << endl;
        result.polar_mode();
        fout << "or\n" << result << endl;
        fout << "Average outward distance per step = "
             << result.magval() / steps << endl;
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quite): ";     
    }

    cout << "Bye!\n";
    cin.clear();
    while (cin.get() != '\n')
        continue;
    return 0;    
}