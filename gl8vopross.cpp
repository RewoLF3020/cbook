#include <iostream>

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void vol(box &);
void showStruct(const box &); 
void iquote(int);
void iquote(double);
void iquote(std::string);

int main()
{
    box info = {"IBM", 150, 55.5, 75.5, 0};
    std::string str = "eceded";
    int a = 13;
    double b = 75.57;
    vol(info);
    showStruct(info);
    iquote(str);
    iquote(a);
    iquote(b);
    return 0;
}


void vol(box & st)
{
    st.volume = st.height * st.length * st.width;
}


void showStruct(const box & st)
{
    std::cout << st.maker << " " << st.height << " " 
    << st.width << " " << st.length << " " 
    << st.volume << "\n";
}


void iquote(int n)
{
    std::cout << "\"" << n << "\"" << "\n";
}


void iquote(double x)
{
    std::cout << "\"" << x << "\"" << "\n";
}


void iquote(std::string s)
{
    std::cout << "\"" << s << "\"" << "\n";
}