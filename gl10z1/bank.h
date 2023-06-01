#ifndef BANK_H
#define BANK_H
#include <string>

class Bank
{
    private:
        std::string name;
        std::string number;
        double balance;  

    public:
        Bank();
        Bank(const std::string & client, const std::string & num, double bal = 0.0);
        ~Bank() {};
        void show() const;
        void add(double val);
        void remove(double val);
};  

#endif