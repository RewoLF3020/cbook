#include <iostream>
int main()
{
    using namespace std;
    const int to_day = 86400;
    const int to_hours = 3600;
    const int to_min = 60;
    long long int sec;
    cout << "Enter the number of seconds: ";
    cin >> sec;
    int days = sec / to_day;
    int hours = (sec % to_day) / to_hours;
    int minn = ((sec % to_day) % to_hours) / to_min;
    int sec_o = sec - days * to_day - hours * to_hours - minn * to_min;
    cout << sec << " seconds = " << days << " days, " << hours << " hours, ";
    cout << minn << " minutes, " << sec_o << " seconds." << endl;
    return 0; 
}