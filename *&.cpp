#include <iostream>
int main()
{
    using namespace std;
    int updates = 6;
    int *p_updates = &updates;

//значение:
    cout << "Values: updates = " << updates;
    cout << ", *p_updates = " << *p_updates << endl;

//адрес:
    cout << "Address: &updates = " << &updates;
    cout << ", p_updates = " << p_updates << endl;

    int *pt = new int;    
    *pt = 1200;
    cout << "" << endl;
    cout << "Value of *pt = " << *pt;
    cout << ", address of *pt = " << pt << endl;
    cout << "location of pointer pt = " << &pt << endl;
    delete pt;

    cout << "" << endl;
    short size;
    cout << "Enter size: ";
    cin >> size;
    short *pz = new short [size];
    *(pz + 4) = 9;
    cout << "pz[4] = " << pz[4] << endl;
    cout << &pz[0] << " " << pz << endl;
    cout << &pz << endl;
    cout << sizeof(pz) << endl;
    cout << sizeof(pz[0]) << endl;
    delete [] pz;

    char flower[10] = "rose";
    cout << flower << "s are red\n";

    return 0;
}