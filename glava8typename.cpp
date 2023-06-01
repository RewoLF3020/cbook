#include <iostream>
using std::cout;
const int lim = 8;

template <typename T>
void Swap(T &a, T &b);

template <typename T>
void Swap(T *a, T *b, int n);
void Show (int a[]);

int main()
{
    int i = 10;
    int j = 20;
    cout << "i, j = " << i << ", " << j << "\n"
    "Using compiler-generated int swapper\n";
    Swap(i, j); 
    cout << "Now i, j = " << i << ", " << j << "\n";

    int d1[lim] = {0, 7, 0, 4, 1, 7, 7, 6};
    int d2[lim] = {0, 7, 2, 0, 1, 9, 6, 9};
    cout << "Original arrays:\n";
    Show(d1);
    Show(d2);
    Swap(d1, d2, lim);
    cout << "Swaped arrays:\n";
    Show(d1);
    Show(d2);

    return 0;
}


template <typename T>
void Swap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}


template <typename T>
void Swap(T a[], T b[], int n)
{
    T temp;

    for (int i = 0; i < n; i++)
    {
        temp = a[i];
        a[i] = b [i];
        b[i] = temp;
    }
}


void Show(int a[])
{
    cout << a[0] << a[1] << "/";
    cout << a[2] << a[3] << "/";
    for (int i = 4; i < lim; i++)
        cout << a[i];
    cout << std::endl;    
}