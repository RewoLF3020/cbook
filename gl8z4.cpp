#include <iostream>
#include <cstring>

struct stringy
{
    char * str;
    int ct;
};

void set(stringy &, char* t);
void show(const stringy &, int n = 1);
void show(const char *, int n = 1);
void del(stringy &);

int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";
    set(beany, testing);
    show(beany);
    show(beany, 2);

    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done.");
    del(beany);

    return 0;
}


void set(stringy & b, char * t)
{
    b.ct = strlen(t);
    b.str = new char[strlen(t) + 1];
    strcpy(b.str, t);
}


void show(const stringy & b, int n)
{
    for (int i = 0; i < n; i++)
        std::cout << b.str << "\n";
}


void show(const char * t, int n)
{
    for (int i = 0; i < n; i++)
        std::cout << t << "\n";
}


void del(stringy & b)
{
    delete [] b.str;
}