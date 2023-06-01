


const int size = 5;

/*void func_in(int mass[], int size, int n)     3
{
    for (int i = 0; i < size; i++)
        mass[i] = n;
}*/





/*void func_mass(int * begin, int * end, int n)         4
{
    int * pt;
    for (pt = begin; pt != end; pt++)
        *pt = n;
}*/

double func_m(const double*, int);//5
int replace(char * str, char c1, char c2);//8


int main()                                
{
    double mass[size] = {5, 8, 45, 7, 9};
    double m = func_m(mass, size);

    char s1 = 'o', s2 = 'a';
    char s3[] = "copo";

    int d = replace(s3, s1, s2);
}

double func_m(const double mas[], int n)
{
    int max = mas[0];
    for (int i = 1; i < n; i++)
    {
        if (mas[i] > max)
            max = mas[i];
    }

    return max;
}


int replace(char * str, char c1, char c2)
{
    int count = 0;
    while (*str)
    {
        if (*str == c1)
        {
            *str = c2;
            count += 1;
        }

        str++;
    }

    return count;
}