#include <iostream>
using namespace std;
class person
{
protected:
    int age;
    string name;

public:
    void info()
    {
        cout << "Enter name:" << endl;
        getline(cin, name);

        cout << "Enter age:" << endl;
        cin >> age;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
class student : public person
{
protected:
    int roll_no;
    string course;

public:
    void stuinfo()
    {
        cin.ignore();
        cout << "Enter course:" << endl;
        getline(cin, course);

        cout << "Enter roll number:" << endl;
        cin >> roll_no;
    }
    void studisplay()
    {
        cout << "Roll Number: " << roll_no << endl;
        cout << "Course: " << course << endl;
    }
};

class result : public student
{
private:
    int marks[5];
    int total;
    float percentage;

public:
    void getMarks()
    {
        total = 0;
        cout << "Enter marks for 5 subjects:" << endl;
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
            total += marks[i];
        }
        percentage = total / 5.0;
    }
    void displayResult()
    {
        cout << "\nPERFORMANCE SUMMARY\n";
        display();
        studisplay();

        cout << "Marks:\n";
        for (int i = 0; i < 5; i++)
            cout << marks[i] << " " << "\n";

        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main()
{
    result r;
    r.info();
    r.stuinfo();
    r.getMarks();
    r.displayResult();
    return 0;
}