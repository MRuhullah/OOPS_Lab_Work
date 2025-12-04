#include <iostream>
#include <string>
using namespace std;

class Teacher
{
protected:
    string name;
    string department;
    int exp;

public:
    void teachinfo()
    {
        cout << "Enter teacher's name: ";
        getline(cin, name);

        cout << "Enter department: ";
        getline(cin, department);

        cout << "Enter years of teaching experience: ";
        cin >> exp;
    }

    void display()
    {
        cout << "\nTeaching Information\n";
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "Teaching Experience: " << exp << " years" << endl;
    }
};

class Researcher
{
protected:
    int papers;
    string researchArea;

public:
    void researchinfo()
    {
        cin.ignore();
        cout << "Enter research area: ";
        getline(cin, researchArea);

        cout << "Enter number of published papers: ";
        cin >> papers;
    }

    void displayresearch()
    {
        cout << "\nResearch Information\n";
        cout << "Research Area: " << researchArea << endl;
        cout << "Number of Published Papers: " << papers << endl;
    }
};

class Faculty : public Teacher, public Researcher
{
public:
    void displayfaculty()
    {
        display();
        displayresearch();
    }
};

int main()
{
    Faculty f;

    f.teachinfo();
    f.researchinfo();

    cout << "\nFaculty Profile" << endl;
    f.displayfaculty();

    return 0;
}
