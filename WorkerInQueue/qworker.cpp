#include "qworker.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

Worker::~Worker() {}


void Worker::Data() const
{
    cout << "Name: " << fullname << endl;
    cout << "Employee ID: " << id << endl;
}


void Worker::Get()
{
    getline(cin, fullname);
    cout << "Enter worker's ID: ";
    cin >> id;
    while(cin.get() != '\n')
        continue;
}


void Waiter::Set()
{
    cout << "Enter waiter's name: ";
    Worker::Get();
    Get();
}


void Waiter::Show() const
{
    cout << "Category: waiter\n";
    Worker::Data();
    Data();
}


void Waiter::Data() const
{
    cout << "Panache rating: " << panache << endl;
}


void Waiter::Get()
{
    cout << "Enter waiter's panache rating: ";
    cin >> panache;
    while (cin.get() != '\n')
        continue;
}





template<class T>
QueueTP<T>::QueueTP(int qs) : qsize(qs)
{
    front = rear = 0;
    items = 0;
}


template<class T>
QueueTP<T>::~QueueTP()
{
    Node * temp;
    while (front != nullptr)
    {
        temp = front;
        front = front->next;
        delete temp;
    }
}

template<class T>
bool QueueTP<T>::isempty() const
{
    return items == 0;
}


template<class T>
bool QueueTP<T>::isfull() const
{
    return items == qsize;
}


template<class T>
int QueueTP<T>::queuecount() const
{
    return items;
}


template<class T>
bool QueueTP<T>::enqueue(T & item) 
{
    if (isfull())
        return false;
    Node * add = new Node;
    add->item = item;
    add->next = nullptr;
    items++;
    if (front == nullptr)
        front = add;
    else 
        rear->next = add;
    rear = add;
    return true;            
}


template<class T>
bool QueueTP<T>::dequeue(T & item)
{
    if (front == nullptr)
        return false;
    item = front->item;
    items--;
    Node * temp = front;
    front = front->next;
    delete temp;
    if (items == 0)
        rear = nullptr;
    return true;        
}


/* template<class T>
bool QueueTP<T>::View() const
{
    if (front == nullptr)
        return false;
    Node * temp = new Node;
    temp = front;
    while (temp)
    {
        cout << endl;
        temp = temp->next;
    }
    return true;
} */