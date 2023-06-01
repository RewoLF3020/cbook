#include <iostream>
#include <fstream>

const int size = 20;

int main()
{
    using namespace std;
    char first_s[50];
    int sec_s;
    double third;
    double f;
    ofstream outFile;
    outFile.open("nummm.txt");
    cout << "Enter the first string: ";
    cin.getline(first_s, 50);
    cout << "Enter the second (int): ";
    cin >> sec_s;
    cout << "Enter the third: ";
    cin >> third;
    f = 0.913 * third;

    outFile << fixed;
    outFile.precision(2);
    outFile.setf(ios_base::showpoint);
    outFile << first_s << endl;
    outFile << sec_s << endl;
    outFile << third << endl;
    outFile << f << endl;
    outFile.close();

    return 0;

}