#include <iostream>
#include <climits>
int main()
{
    using namespace std;
    int n_int = INT_MAX;
    long long n_llong = LLONG_MAX;
    cout << "int is " << sizeof (int) << " bytes." << endl;
    cout << "long long is " << sizeof (long long) << " bytes." << endl;
    cout << "max values: " << endl;
    cout << "int: " << n_int << endl;
    cout << "long long: " << n_llong << endl;
    return 0;
}