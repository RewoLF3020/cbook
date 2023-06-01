#include <iostream>
int main()
{
    using std::cin;
    using std::cout;
    char ch;
    int a_grade, b_grade, c_grade, d_grade, f_grade;
    a_grade = b_grade = c_grade = d_grade = f_grade = 0;
    cin >> ch;
    switch (ch)
    {
        case 'A': a_grade++; 
            break;
        case 'B': b_grade++;
            break;
        case 'C': c_grade++;
            break;
        case 'D': d_grade++;
            break;
        case 'F': f_grade++;
            break;
        default: "That's not a choice.\n";    
    }
}    