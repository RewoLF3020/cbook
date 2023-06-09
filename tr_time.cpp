#include <iostream>
struct travel_time
{
    int hours;
    int mins;
};
const int mins_per_hr = 60;

travel_time summ (travel_time *t1, travel_time *t2);
void show_time (travel_time t);

using std::cout;

int main()
{
    travel_time day1 = {5, 45};
    travel_time day2 = {4, 55};
    travel_time trip = summ (&day1, &day2);

    cout << "Two-day total: ";
    show_time (trip);

    travel_time day3 = {4, 32};
    cout << "Three day total: ";
    show_time (summ (&trip, &day3));

    return 0;
}


travel_time summ (travel_time *t1, travel_time *t2)
{
    travel_time total;
    total.mins = (t1->mins + t2->mins) % mins_per_hr;
    total.hours = t1->hours + t2->hours + (t1->mins + t2->mins) / 60;

    return total;
}


void show_time (travel_time t)
{
    cout << t.hours << " hours, "
         << t.mins << " minutes\n";
} 
