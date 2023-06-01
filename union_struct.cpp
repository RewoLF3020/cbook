#include <iostream>
struct widget 
{
    char brand[20];
    int type;
    union id 
    {
        long id_num;
        char id_char[20];
    } id_val;
};

int main() 
{
    using namespace std;
    widget prize;
    cout << "Enter prize.type: ";
    cin >> prize.type;
    if (prize.type==1) {
        cout << "Enter num: ";
        cin >> prize.id_val.id_num;
    }  
    else {
        cout << "Enter inf: ";
        cin >> prize.id_val.id_char;
    }
    return 0;
}