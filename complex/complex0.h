#ifndef COMPLEX0
#define COMPLEX0
#include <iostream>

class Complex
{
    private:
        double real;
        double imaginary;
    public:
        Complex();
        Complex(double r, double im);
        ~Complex() {}
        Complex operator+(Complex & num) const;
        Complex operator-(Complex & num) const;
        Complex operator*(Complex & num) const;
        Complex operator*(double n) const;
        Complex operator~() const;
        friend Complex operator*(double n, const Complex & n2);
        friend std::ostream & operator<<(std::ostream & os, const Complex & num);
        friend std::istream & operator>>(std::istream & is, Complex & num);    
};

#endif