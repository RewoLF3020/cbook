#include <iostream>
#include <fstream>
#include <cstdlib>

using std::cout;
using std::cin;
using std::endl;

const int size = 20;

int main()
{
    int count = 0;
    char filename[size], ch;
    std::ifstream inFile;

    cout << "Enter fileme: ";
    cin.getline(filename, size);
    inFile.open(filename);

    if (!(inFile.is_open()))
    {
        cout << "Could't open the file" << filename << endl;
        exit(EXIT_FAILURE);
    }

    while (inFile >> ch)
    {
        count++;
    }

    if (inFile.eof())
        cout << "End of file reached\n";
    else if (inFile.fail())
        cout << "Input teerminated by data dismatch\n";
    else 
        cout << "Input terminated for unknown reason\n";        
    
    if (count == 0)
        cout << "NO DATA\n";
    else 
        cout << count << "symbols in file" << endl;    

    inFile.close();    
}