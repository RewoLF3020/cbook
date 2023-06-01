#include <iostream>

using std::cout;
using std::cin;
using std::endl;

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume; 
};

void func_show(box);
void func_vol(box*);

int main()
{
    box param = {"International Business Machines", 125.5, 50.75, 75};
    func_vol(&param);
    func_show(param);
}


void func_vol(box * str)
{
    str->volume = str->height * str->length * str->width;
}


void func_show(box str)
{
    cout << "Maker: " << str.maker << endl <<
    "Height: " << str.height << endl << 
    "Width: " << str.width << endl <<
    "Length: " << str.length << endl <<
    "Volume: " << str.volume << endl;
}