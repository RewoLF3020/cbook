#include <iostream>
#include <cstring>

using namespace std;

const int SLEN = 30;

struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(student pa[], int n);
void display1(student st);
void display2 (const student * ps);
void display3 (const student pa[], int n);

int main()
{
    int class_size;
    cout << "Enter class size: ";
    cin >> class_size;
    //while (cin.get() != '\0')
        //continue;
    student *ptr_stu = new student[class_size];
    int ent = getinfo(ptr_stu, class_size);

    for (int i = 0; i < ent; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, ent);
    delete [] ptr_stu;
    cout << "Done\n";
    
    return 0;
}


int getinfo(student pa[], int n)
{
    cout << "Enter student's data:\n";
    int i;
    for (i = 0; i < n; i++)
    {
        cout << "Student " << i + 1 << endl;
        cout << "Enter student's surname: "; cin.get();
        cin.getline(pa[i].fullname, SLEN);
        cout << "Enter student's hobby: "; cin.get();
        cin >> pa[i].hobby;
        cout << "Enter student's hobby: ";
        cin >> pa[i].ooplevel;
        if (strlen(pa[i].fullname) == 0)
            break;
    }
    return i;
}


void display1(student st)
{
    cout << st.fullname << " " << st.hobby << " " << st.ooplevel << endl;
}


void display2 (const student * ps)
{
    cout << ps->fullname << " " << ps->hobby << " " << ps->ooplevel << endl;
}


void display3 (const student pa[], int n)
{
    for (int i = 0; i < n; i++)
        cout << pa[i].fullname << " " << pa[i].hobby << " " << pa[i].ooplevel << endl;
}