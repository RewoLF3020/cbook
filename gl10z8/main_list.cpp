#include <iostream>
#include "list.h"
#include "list.cpp"

void nullify(database & cl);

int main()
{
    using std::cout;
    using std::cin;

    List list;
    database clients;
    char ch;

    cout << "Please enter A to add purchase order and customer information,\n"
    << "P to process a PO, E to edit list, or Q to quit.\n";

    while (cin >> ch && ch != 'q')
    {
        switch (ch)
        {
            case 'A':
            case 'a': 
                cout << "Enter a PO number to add:# ";
                cin >> clients.order_num;
                cout << "Enter customer's fullname: "; cin.get();
                cin.getline(clients.fullname, 35);
                cout << "Enter customer's payment: $";
                cin >> clients.payment;

                if (list.isfull())
                    cout << "stack already full\n";
                else
                    list.push(clients);    
                break;
            case 'P':
            case 'p':
                if (list.isempty())
                    cout << "stack already empty\n";
                else 
                {
                    list.pop(clients);
                    cout << "PO #" << clients.order_num << " popped\n";
                }            
                break;
            case 'E':
            case 'e':
                list.visit(nullify);
                break;
        }    

        cout << "Please enter A to add purchase order and customer information,\n"
    << "P to process a PO, E to edit list, or Q to quit.\n";
    }
}


void nullify(database & cl)
{
    cl.payment = 0.0;
}