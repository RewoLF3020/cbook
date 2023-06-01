#include <iostream>

double add(double*, double*);
double add2(double*, double*);
double calculate(double*, double*, double (*pt)(double*, double*));

int main()
{
    double (*pf[2])(double*, double*) = {add, add2};
    double a, b;
    std::cout << "Enter a, b:\n";

    while(std::cin >> a >> b)
    {
        double s = calculate(&a, &b, *pf[0]);
        double p = calculate(&a, &b, *pf[1]);
        std::cout << "Sum: " << s << std::endl;
        std::cout << "Product: " << p << std::endl;
    }

    return 0;
}


double calculate(double *x, double *y, double (*pt)(double*, double*))
{
    return (*pt)(x, y);
}


double add(double *x, double *y)
{
    return *x + *y;
}


double add2(double *x, double *y)
{
    return *x * *y;
}