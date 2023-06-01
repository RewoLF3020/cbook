#include <iostream>

void func_show(std::string * str, int n = 0);

int count = 0;

int main()
{
    std::string s = "rfrsferfr"; 
    int n = 5;
    func_show(&s);
    s = "jyjgnhgn";
    func_show(&s);
    s = "aasa swdefr gt";
    func_show(&s);
    std::cout << "************\n";
    func_show(&s, n);

    return 0;
}


void func_show(std::string * str, int n)
{
    if (n != 0)
    {
        for (int i  = 0; i < n; i++)
            std::cout << *str << "\n";
    }
    else 
        std::cout << *str << "\n"; 
    
}
