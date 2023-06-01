#include <iostream>
int main()
{
    using namespace std;
    const int pre_to_dec = 60;
    int deg, minn, sec;
    cout << "Enter а latitude in degrees, minutes, and seconds:";
    cin >> deg >> minn >> sec;
    double dec = deg + (minn + sec * 60) / 60.;
    cout << deg << " degrees, " << minn << " minutes, " << sec << " seconds = ";
    cout << dec << " degrees." << endl;
    return 0;
}