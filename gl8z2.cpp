#include <iostream>

struct CandyBar
{
    const char * name;
    double weight;
    int cal;
};

void func_make(CandyBar &, const char * name = "Millennium Munch", double w = 2.85, int k = 350);
void func_show(CandyBar &);

int main()
{
    CandyBar box1;
    CandyBar box2;
    CandyBar box3;
    func_make(box1);
    func_make(box2, "Rafaello");
    func_make(box3, "Merci", 3.75);
    func_show(box1);
    func_show(box2);
    func_show(box3);
}


void func_make(CandyBar & box, const char * name, double w , int k)
{
    box.name = name;
    box.weight = w;
    box.cal = k;
}


void func_show(CandyBar & box)
{
    std::cout << "Name: " << box.name << "\n";
    std::cout << "Weight: " << box.weight << "\n";
    std::cout << "Calories: " << box.cal << "\n"; 

}