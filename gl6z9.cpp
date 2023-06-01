#include <iostream>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;
using std::ifstream;

const int size = 20;
struct don
{
    char name[size];
    double summ;
};

int main()
{
    ifstream inFile;
    int num, count1 = 0, count2 = 0;
    don * mass = new don[num];
    char filename[size];

    cout << "Enter filename: ";
    cin.getline(filename, size);
    inFile.open(filename);

    if (!(inFile.is_open()))
    {
        cout << "Couldn't open the file " << filename << endl;
        exit(EXIT_FAILURE);
    }

    inFile >> num;   


    for (int i = 0; i < num; i++)
    {
        inFile >> mass[i].name; inFile.get();
        inFile >> mass[i].summ;
    }

    inFile.close();    
}
