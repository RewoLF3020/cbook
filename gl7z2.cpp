#include <iostream>

using std::cin;
using std::cout;

const int size = 10;

int func_ent(int ar[], int n);
double func_aver(int ar[], int n, int count);
void func_show(int ar[], int n, int count);

int main()
{
    int res[size];
    cout << "Enter results: ";
    int counter = func_ent(res, size); 
    func_show(res, size, counter);
    cout << "Average: " << func_aver(res, size, counter);
    return 0;
}


int func_ent(int ar[], int n)
{
    int i = 0;
    while (cin && i < size)
    {
        cin >> ar[i];
        if (!(cin.good()))
        {
            cin.clear();
            break;
        }
        i++;    
    }
    return i;
}


double func_aver(int ar[], int n, int count)
{
    int summ = 0, sr;
    for (int i = 0; i < count; i++)
    {
        summ += ar[i];
    }
    return sr = summ;
}


void func_show(int ar[], int n, int count)
{
    cout << "Results: ";
    for (int i = 0; i < count; i++)
    {
        cout << ar[i] << " ";
    }

    cout << "\n";
}
