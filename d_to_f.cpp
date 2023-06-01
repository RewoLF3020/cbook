#include <iostream>
int main()
{
    using namespace std;
    const int d_to_f = 12;
    int du;
    cout << "Enter du: ___\b\b\b";
    cin >> du;
    int fut = du / d_to_f;
    int du_o = du % d_to_f;
    cout << du << " duimov = " << fut << " futov ";
    cout << "and " << du_o << " duimov" << endl;
    return 0; 
}