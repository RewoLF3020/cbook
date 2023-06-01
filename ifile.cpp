#include <iostream>
#include <fstream>
#include <cstdlib>
const int size = 60;
int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    char filename[size];
    std::ifstream inFile;
    cout << "Enter filename: ";
    cin.getline(filename, size);
    inFile.open(filename);
    while (!(inFile.is_open()))
    {
        cout << "Could not open the file " << filename << endl;
        cout << "program terminating\n";
        //exit(EXIT_FAILURE);
        cout << "Enter filename: ";
        cin.getline(filename, size);
        inFile.open(filename);
    }
    
    
    double value;
    double sum = 0.0;
    int count = 0;
    while (inFile >> value)
    {
        count++;
        sum+=value;
    }

    if (inFile.eof())
        cout << "End of file reached.\n";
    else if (inFile.fail())
        cout << "Input terminated by data mismatch.\n";
    else 
        cout << "Input terminated for unknown reason.\n";
    if (count == 0)
        cout << "No data processed.\n";
    else 
    {
        cout << "Items read: " << count << endl;
        cout << "Sum: " << sum << endl;
        cout << "Average: " << sum/count << endl;
    }        

    inFile.close();
    return 0;
}
