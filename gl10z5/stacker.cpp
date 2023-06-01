#include <iostream>
#include <cctype>
#include "stack.h"
#include "stack.cpp"

const int num_cl = 20;

int main()
{
    using std::cout;
    using std::cin;

    Stack st;
    char ch;
    customer clients;

    cout << "Please enter A to add customer,\n"
    << "P to process a PO, or Q to quit.\n";
    

    while (cin >> ch && toupper(ch) != 'Q')
    {
        while (cin.get() != '\n')
            continue;
        if (!isalpha(ch))
        {
            cout << '\a';
            continue;
        }

        switch(ch)
        {
            case 'A':
            case 'a': 
                cout << "Enter customer's fullname: ";
                cin.getline(clients.fullname, 35);
                cout << "Enter customer's payment: $";
                cin >> clients.payment;

                if (st.isfull())
                    cout << "stack already full\n";
                else
                    st.push(clients);    
                break;
            case 'P':
            case 'p':
                if (st.isempty())
                    cout << "stack already empty\n";
                else 
                {
                    st.pop(clients);
                    cout << "PO #" << clients.fullname << " popped\n";
                }            
                break;
        }

        cout << "Please enter A to add customer,\n"
        << "P to process a PO, or Q to quit.\n";
    }
    cout << "Bye\n";
    return 0;
}