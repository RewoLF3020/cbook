#include <iostream>
#include <cstdlib>
#include <ctime>
#include "queue.h"
#include "queue.cpp"

const int MIN_PER_HR = 60;

bool new_customer(double x);

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::ios_base;

    srand(time(0));
    cout << "Case Study: Bank of Heather Automatic Teller\n";
    cout << "Enter maximum size of queue: ";
    int qs;
    cin >> qs;
    Queue line(qs), line2(qs);
    cout << "Enter number of simulation hours: ";
    int hours;
    cin >> hours;
    long cyclelimit = 6 * MIN_PER_HR * hours;  // 1 цикл будет 10 секунд, т.е. cyclelimit это кол-во таких циклов
    cout << "Enter the average number of customers per hour: ";
    double perhour;
    cin >> perhour;
    double tensec_per_cust;
    tensec_per_cust = MIN_PER_HR * 6 / perhour;    //частота появления клиентов (среднее появление клиента за единицу времени(за несколько 10секундных периодов))
    Item temp;
    long turnaways = 0;
    long customers = 0;
    long served = 0;
    long sum_line = 0; 
    int wait_time = 0;
    int line_wait = 0;

    for (int cycle = 0; cycle < cyclelimit; cycle++)
    {
        if (new_customer(tensec_per_cust))
        {
            if (line.isfull() && line2.isfull())                                       
                turnaways++;
            else if (line.queuecount() < line2.queuecount())
            {
                customers++;
                temp.set(cycle);
                line.enqueue(temp);
            }    
            else 
            {
                    customers++;
                    temp.set(cycle);
                    line2.enqueue(temp);
            }
        }

        if (wait_time <= 0 && !line.isempty())   
        {
            line.dequeue(temp);
            wait_time = temp.ptime();
            line_wait += (cycle - temp.when()) * 10 / 60; //переводим в минуты 
            served++;
        }

        if (wait_time > 0)
            wait_time--;
        sum_line += line.queuecount();    
    }

    if (customers > 0)
    {
        cout << "customers accepted: " << customers << endl;
        cout << "customers served: " << served << endl;
        cout << "turnaways: " << turnaways << endl;
        cout << "average queue size: ";
        cout.precision(2);
        cout.setf(ios_base::fixed, ios_base::floatfield);
        cout << (double) sum_line / cyclelimit << endl;
        cout << "average wait time: "
             << (double) line_wait / served << " minutes\n"; 
    }
    else
        cout << "No customers!\n";
    cout << "Done.\n";

    return 0;    
}


bool new_customer(double x)
{
    return (rand() * x / RAND_MAX < 1);
}