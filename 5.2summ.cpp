#include <iostream>

using std::cin;
using std::cout;
using std::swap;

void print(double**, int, int);
void sort(double**, int, int);

int main()
{
  
    int n, m;
    cout << "n = "; cin >> n;
    cout << "m = "; cin >> m;
    double** a = new double* [n];

    for (int i = 0; i < n; i++)
        a[i] = new double[m+1];

    for(int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
        cout << "a[" << i + 1 << "][" << j + 1 << "] = ";
        cin >> a[i][j];
        }

    for (int i = 0; i < n; i++)
        a[i][m] = 0;
    cout << "\nOriginal massive:\n";
    print(a, n, m);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            a[i][m] += a[i][j];

    sort(a, n, m);

    cout << "\nRecieved massive:\n";
    print(a, n, m);

    return 0;
}


void print(double** a, int n, int m)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++) cout << a[i][j] << " ";
        cout << "\n";
    }
    cout << "\n";
}


void sort(double** a, int n, int m)
{
    for (int l = 1; l < n; l++)
        for (int i = 0; i < n - l; i++)
            if (a[i][m] > a[i + 1][m])
                swap(a[i], a[i + 1]);
}