#include <iostream>
#include <string>
#include <cstring>
int main ()
{
    using namespace std;
    char ch1[20];
    char ch2[20] = "popular";
    string s1;
    string s2 = "hacker";
    strcat(ch2, " hacker");  
    stpcpy(ch1, ch2);
    cout << ch1 << endl;
    return 0;
}
