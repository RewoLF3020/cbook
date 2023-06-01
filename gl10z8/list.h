#ifndef LIST
#define LIST
#include <string>

struct database
{
    char fullname[35];
    std::string order_num;
    double payment;
};
typedef database Item;

class List
{
    private:
        static const int MAX = 10;
        Item items[MAX];
        int top;
        double total = 0.0;

    public:
        List();
        ~List() {}
        bool push(const Item & item);
        bool pop(Item & item);
        bool isempty() const;
        bool isfull() const;
        void visit(void (*pf)(Item & item));    
};

#endif