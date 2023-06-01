#include <iostream>
#include <array>


int main()
{
    /* unsigned char a = 00111;
    unsigned char b = ~a; 
    std::cout << b;

    double a = 1500, b = 1700;
    double c = (a + b) * 60;
    double d = a * 60 + b * 60;
    std::cout << c << " " << d << "\n";

    std::cerr << a;
    using namespace std;
    array<int, 4> ai = {1, 2, 3, 4};

    for (int i = 0; i < 4; i++)
        std::cout << ai[i];
    std::cout << "\n";    

    int side = 3.33;
    std::cout << side;    */


   /*  double a = 3.33;
    int c = int(a);
    c = (int)a;
    std::cout << c << '\n';  */

    /* std::string s1 = "flenc";
    std::string s2 = "nfrl";
    std::string s3 = s1 + s2;
    std::cout << s3; */



    const int size = 10;
    int *mas = new int[size] ;
    int max = mas[size - 1];    
    std::cout << "Fill array:\n";
    for (int i = 0; i < size; i++)
    {
        std::cin >> mas[i]; 
    }

    for (int i = size - 2; i > 0; i--)
    {
        if (mas[i] > max)
            max = mas[i];
    }

    std::cout << max << std::endl;

}