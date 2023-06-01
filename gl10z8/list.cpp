#include <iostream>
#include "list.h"

List::List()
{
    top = 0;
}


bool List::push(const Item & item)
{
    if (top < MAX)
    {
        items[top++] = item;
        return true;
    }
    else 
        return false;
}


bool List::pop(Item & item)
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


bool List::isempty() const
{
    return top == 0;
}


bool List::isfull() const
{
    return top == MAX;
}


void List::visit(void (*pf)(Item & item))
{
    for (int i = 0; i < MAX; i++)
        pf(items[i]);
}