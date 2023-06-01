#include <iostream>
int main()
{
    using namespace std;
    const int to_du = 12;
    const double to_metr = 0.0254;
    const float to_kg = 2.2;

    int heightf, heightd, weightf;
    cout << "Enter height in foots and duims and weight in foonts: ";
    cin >> heightf >> heightd >> weightf;
    int rost_d = heightd + heightf * to_du;
    float rost_m = rost_d * to_metr;
    auto mas_kg = weightf / to_kg;
    auto bmi = mas_kg / (rost_m * rost_m);
    cout << "BMI = " << bmi << endl;
    return 0;
}