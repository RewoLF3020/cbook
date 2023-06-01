#ifndef WORKER_Q
#define WORKER_Q
#include <string>

class Worker
{
    private:
        std::string fullname;
        long id;

    protected:
        virtual void Data() const;
        virtual void Get();

    public:
        Worker() : fullname("no one"), id(0) {}
        Worker(const std::string s, long n) : fullname(s), id(n) {}
        virtual ~Worker() = 0;
        virtual void Set() = 0;
        virtual void Show() const = 0;
};


class Waiter : virtual public Worker
{
    private:
        int panache;

    protected:
        void Data() const;
        void Get();

    public:
        Waiter() : Worker(), panache(0) {}
        Waiter(const std::string & s, long n, int p = 0) : Worker(s, n), panache(p) {}
        Waiter(const Waiter & wk, int p = 0) : Worker(wk), panache(p) {}
        void Set();
        void Show() const;
};


template<class T>
class QueueTP
{
    private:
        struct Node {T item; struct Node * next;};
        enum {Q_SIZE = 10};
        Node *  front;
        Node * rear;
        int items;
        const int qsize;

        //QueueTP(const QueueTP & q) : qsize(0) {}
        //QueueTP & operator=(const QueueTP & q) { return *this; }

    public:
        QueueTP(int qs = Q_SIZE);
        ~QueueTP();
        bool isempty() const;
        bool isfull() const;
        int queuecount() const;
        bool enqueue(T & item);
        bool dequeue(T & item);
        bool View() const;
};

#endif