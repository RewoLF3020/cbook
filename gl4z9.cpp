#include <iostream>
struct CandyBar
{
    std::string name;
    float weight;
    int cal;
};
int main()
{
    using std::cout;
    using std::endl;

    //CandyBar trio[3]; 
    CandyBar *pt = new CandyBar[3];
    pt[0] = {"MochManch", 2.3, 350};
    pt[1] = {"Snack", 3.6, 470};
    pt[2] = {"Tuc", 1.5, 120};
    
    //вывод первой структуры:
    cout << "Snack1: " << endl;
    cout << "Name: " << pt[0].name << endl;
    cout << "Weight: " << pt[0].weight << endl;
    cout << "Number of calories: " << pt[0].cal << endl;
    cout << " " << endl;

    //вывод второй структуры:
    cout << "Snack2: " << endl;
    cout << "Name: " << pt[1].name << endl;
    cout << "Weight: " << pt[1].weight << endl;
    cout << "Number of calories: " << pt[1].cal << endl;
    cout << " " << endl; 

    //вывод третьей структуры:
    cout << "Snack3: " << endl;
    cout << "Name: " << pt[2].name << endl;
    cout << "Weight: " << pt[2].weight << endl;
    cout << "Number of calories: " << pt[2].cal << endl;

    return 0;
}