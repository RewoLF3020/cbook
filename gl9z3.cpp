#include <iostream>
#include <cstring>
#include <new>

const int n = 20;

struct chaff
{
    char dross[n];
    int slag;
};

void setchaff(chaff & s, const char * str, int sl)
{
    strcpy(s.dross, str);
    s.slag = sl;
}

void showchaff(chaff & s)
{
    std::cout << "Name: " << s.dross << "\n";
    std::cout << "Value: " << s.slag << "\n";
}

char buffer[500];

int main()
{
    chaff *p1, *p2;
    p1 = new chaff[2];
    p2 = new (buffer) chaff[2];

    char dr[n];
    int val;

    for (int i = 0; i < 2; i++)
    {
        std::cout << "Enter string: ";
        std::cin >> dr;
        std::cout << "Enter value: ";
        std:: cin >> val;
        setchaff(p1[i], dr, val);
    }

    showchaff(p1[0]);
    showchaff(p1[1]);

    for (int i = 0; i < 2; i++)
    {
        std::cout << "Enter string: ";
        std::cin >> dr;
        std::cout << "Enter value: ";
        std:: cin >> val;
        setchaff(p2[i], dr, val);
    }

    showchaff(p2[0]);
    showchaff(p2[1]);
}