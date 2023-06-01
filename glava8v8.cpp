#include <iostream>

//using std::max;

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

template <typename T>
T max(T a, T b)
{
    return a > b ? a : b;
}

template<> box max(box a, box b)
{
    return a.volume > b.volume ? a : b;
}


void vol(box &);
void showStruct(const box &); 

int main()
{
    box info = {"IBM", 150, 55.5, 75.5, 0};
    box camp = {"Lcase Custom", 100, 25.5, 55.5, 0};
    vol(info);
    vol(camp);
    showStruct(max(info, camp));
    //max(info, camp);

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


/*template<> box max (box a, box b)
{
    return a.volume > b.volume ? a : b;
}*/
