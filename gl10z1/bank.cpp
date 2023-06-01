#include <iostream>
#include "bank.h"

Bank::Bank()
{
    name = "no name";
    number = "----"; 
    balance = 0.0;
}


Bank::Bank(const std::string & client, const std::string & num, double bal)
{
    name = client;
    number = num;
    balance = bal;
}


void Bank::add(double val)
{
    if (val < 0)
    {
        std::cout << "Deposit amount can't be negative. "
        << "Transaction is aborted.\n";
    }
    else 
    {
        balance += val;
        show();
    }
}


void Bank::remove(double val)
{
    if (val < 0)
    {
        std::cout << "Removing from account can't be negative. "
        << "Transaction is aborted.\n";
    }
    else if (val > balance)
    {
        std::cout << "You can't remove more than you have! "
        << "Transaction is aborted.\n";
    }
    else 
    {
        balance -= val;
        show();
    }
}


void Bank::show() const
{
    using std::cout;
    using std::ios_base;
    ios_base::fmtflags origin = cout.setf(ios_base::fixed, ios_base::floatfield);
    cout.precision(2);
    cout << "Client name: " << name << "\n";
    cout << "Deposit number: " << number << "\n";
    cout << "Deposit balance: $" << balance << "\n";
}