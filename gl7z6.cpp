#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int Fill_array(double ar[], int n);
void show_array(double ar[], int n);
void Reverse_array(double ar[], int n);

int main()
{
    double arr[10];
    cout << "Fill array:\n";
    int size = Fill_array(arr, 10);
    show_array(arr, size);
    Reverse_array(arr, size);
    show_array(arr, size);
    return 0;
}


int Fill_array(double ar[], int n)
{
    int i = 0;
    while (cin && i < n)
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


void show_array(double ar[], int n)
{
    for (int i = 0; i < n; i++)
        cout << ar[i] << " ";
    cout << endl;    
}


void Reverse_array(double ar[], int n)
{
    //double temp;
    for (int i = 1; i < n / 2; i++)
    {
        //temp = ar[i];
        //ar[i] = ar[n - 1 - i];
        //ar[n - 1 - i] = temp;
        std::swap(ar[i], ar[n - 1 - i]);
    }
}