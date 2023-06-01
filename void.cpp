#include <iostream>
void func_1(void);
void func_2(void);
int main()
{   func_1();
    func_1();
    func_2();
    func_2();
    return 0;
}
 
void func_1()
{
    using std::cout;
    using std::endl;
    cout << "coding every day" << endl;
}
 
void func_2()
{
     using std::cout;
     using std::endl;
     cout << "or highway to hell" << endl;
}