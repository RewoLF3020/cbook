#include <iostream>
#include <vector>
#include <array>
#include <string>
struct fish
{
    char kind[20];
    int weight;
    float length;
};

enum Response {No, Yes, Maybe};
int main()
{
    using namespace std;
    fish one = {"shark", 50, 45.75};
    fish *ppr = new fish;
    cout << "Enter kind: ";
    cin >> ppr->kind;
    
    int n, a = 1;
    cout << "Enter n: ";
    cin >> n;
    vector<double> vd(n);
    for (int i = 0; i < n; i++)
    {
        vd[i] = 7 * a;
        a++;
    }

    a = 1;

    for (int i = 0; i < n; i++)
    {
        cout << "3 * " << a << " = " << vd[i] << endl;
        a++;
    }

    array<char, 30> act;

    int mass[5] = {1, 3, 5, 7, 9};
    int even = mass[0] + mass[4];

    float mass2[2] = {1.25, 2.5};
    float m2 = mass2[1];
    cout << mass2[0] * 2 << " = " << m2 << endl; 

    char mass3[13] = "cheeseburger";

    string s = "Waldorf Salod";

    double ted;
    double *ptr = &ted;
    cout << "ted = " << *ptr << endl;

    float treacle[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    float *p = treacle;
    cout << "First and last elemets are: " << *p << " and " << *(p+9) << endl;

    unsigned int k;
    cout << "Enter k: ";
    cin >> k;
    int *m_k = new int [k];
    m_k[0] = 12;

    return 0;
}