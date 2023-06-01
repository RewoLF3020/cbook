#include <iostream>
#include <cstring>
#include "stack.h"

Stack::Stack()
{
    top = 0;
}


bool Stack::isempty() const
{
    return top == 0;
}


bool Stack::isfull() const
{
    return top == MAX;
}


bool Stack::push(const Item & item)
{
    if (top < MAX)
    {
        items[top++] = item;
        return true;
    }
    else 
        return false;
}


bool Stack::pop(Item & item)
{
    if (top > 0)
    {
        total += items[--top].payment;
        item = items[top];
        std::cout << "Total payments for all time: $" << total << "\n";
        return true;
    }
    else 
        return false;
}