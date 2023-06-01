#include <iostream>
int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    const int invest = 100;
    float dafna = 100, kleo = 100;
    int count = 1;

    while (kleo <= dafna)
    {
        cout << count << " year" << endl;
        kleo += kleo * 0.05;
        dafna += 0.1 * invest;
        cout << "Kleo: " << kleo << "$" << endl;
        cout << "Dafna: " << dafna << "$" << endl;
        cout << "_________________________" << endl; 
        count ++;
    }

    cout << "It's need " << count - 1<< " years." << endl;
}
