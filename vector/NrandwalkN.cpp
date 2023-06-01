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
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    unsigned long max = 0, min, average1, average2, steps_sum = 0.0;
    cout << "Enter target distance (q to quit): ";

    while (cin >> target)
    {
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;

        unsigned int n;
        cout << "Enter amount of attempts: ";
        cin >> n;
        average1 = (target / dstep) * (target / dstep);
        cout << "Average amount of steps(teoretical) = " << average1 << endl;
        average1 = 0;
        for (int i = 0; i < n; i++)
        {
            while (result.magval() < target)
            {
                direction = rand() % 360;
                step.reset(dstep, direction, Vector::POL);
                result = result + step;
                steps++;
            }    

            steps_sum += steps;    

            if (steps > max)
                max = steps;

            if (i == 0)
                min = steps;
            else if (steps < min)
            {
                min = steps;
            }
            /* fout << "After " << steps << " steps the subject " 
               " has the following location:\n";
            //cout << result << endl;
            fout << result << endl;
            result.polar_mode();
            fout << "or\n" << result << endl;
            fout << "Average outward distance per step = "
                << result.magval() / steps << endl; */
            steps = 0;
            result.reset(0.0, 0.0);
        }

        average2 = steps_sum / n;
        cout << "Average amount of steps(practical) = " << average2 << endl;
        cout << "Minimum amount of steps = " << min << endl;
        cout << "Maximum amount of steps = " << max << endl;
        steps_sum = average2 = min = max = 0;
        
        cout << "Enter target distance (q to quite): ";     
    }

    cout << "Bye!\n";
    cin.clear();
    while (cin.get() != '\n')
        continue;
    return 0;    
}