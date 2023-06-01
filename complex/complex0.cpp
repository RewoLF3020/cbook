#include "complex0.h"


Complex::Complex()
{
    real = imaginary = 0.0;
}


Complex::Complex(double r, double im)
{
    real = r;
    imaginary = im;
}


Complex Complex::operator+(Complex & num) const
{
    Complex sum;
    sum.real = real + num.real;
    sum.imaginary = imaginary + num.imaginary;
    return sum;
}


Complex Complex::operator-(Complex & num) const
{
    Complex diff;
    diff.real = real - num.real;
    diff.imaginary = imaginary - num.imaginary;
    return diff;
}


Complex Complex::operator*(Complex & n2) const
{
    Complex pr;
    pr.real = real * n2.real - imaginary * n2.imaginary;
    pr.imaginary = real * n2.imaginary + imaginary * n2.real;
    return pr;
}


Complex Complex::operator*(double n) const
{
    return Complex(n * real, n * imaginary);
}


Complex operator*(double n, const Complex & n2)
{
    Complex pr;
    pr.real = n * n2.real;
    pr.imaginary = n * n2.imaginary;
    return pr;
}


Complex Complex::operator~() const
{
    return Complex(real, -imaginary);
}


std::ostream & operator<<(std::ostream & os, const Complex & num)
{
    os << "(" << num.real << ", " << num.imaginary << "i)"; 
    return os;
}


std::istream & operator>>(std::istream & is, Complex & num)
{
    std::cout << "real: "; 
    is >> num.real;
    std::cout << "imaginary: ";
    is >> num.imaginary;
    return is;
}