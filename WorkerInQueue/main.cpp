#include "qworker.h"
#include "qworker.cpp"
#include <iostream>
#include <cstring>

const int SIZE = 5;


int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::strchr;

    Worker * lolas[SIZE];

    int ct;
    
    for (ct = 0; ct < SIZE; ct++)
    {
        char choice;
        cout << "Enter the employee category:\n"
            << "w: waiter\tq: quit\n";
        cin >> choice;

        while (strchr("wq", choice) == NULL)
        {
            cout << "Please enter w or q: ";
            cin >> choice;
        }

        if (choice == 'q')
            break;

        switch(choice)
        {
            case 'w': lolas[ct] = new Waiter;
                break;
            //...    
        }    
        cin.get();
        lolas[ct]->Set();
    }

    cout << "\nYour staff:\n";
    int i;
    
    for (i = 0; i < ct; i++)
    {
        cout << endl;
        lolas[i]->Show();
    }

    

    QueueTP<Worker *> test_q;

    for (i = 0; i < ct; i++)
    {
        test_q.enqueue(lolas[i]);
    }

    //test_q.View();       енужно использовать методы Show классов Worker или Waiter но мы не можем

    for (i = 0; i < ct; i++)
        delete lolas[i];

    return 0;    



   /*  QueueTP<Waiter> ls;

    cout << "Enter number of waiter's staff: ";
    int n;
    cin >> n;
    while(cin.get() != '\n')
        continue;

    Worker * staff = new Waiter[n];

    for (int i = 0; i < n; i++)
        staff[i].Set();

    for (int i = 0; i < n; i++)
        staff[i].Show();    */ 

}