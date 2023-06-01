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

    CandyBar trio[3];
    trio[0] = {"MochManch", 2.3, 350};
    trio[1] = {"Snack", 3.6, 470};
    trio[2] = {"Tuc", 1.5, 120};
    
    //вывод первой структуры:
    cout << "Snack1: " << endl;
    cout << "Name: " << trio[0].name << endl;
    cout << "Weight: " << trio[0].weight << endl;
    cout << "Number of calories: " << trio[0].cal << endl;
    cout << " " << endl;

    //вывод второй структуры:
    cout << "Snack2: " << endl;
    cout << "Name: " << trio[1].name << endl;
    cout << "Weight: " << trio[1].weight << endl;
    cout << "Number of calories: " << trio[1].cal << endl;
    cout << " " << endl; 

    //вывод третьей структуры:
    cout << "Snack3: " << endl;
    cout << "Name: " << trio[2].name << endl;
    cout << "Weight: " << trio[2].weight << endl;
    cout << "Number of calories: " << trio[2].cal << endl;

    return 0;
}