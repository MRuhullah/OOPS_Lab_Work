#include <iostream>
using namespace std;

class Student
{
protected:
    string name;
    int roll;

public:
    Student() : name(""), roll(0) {}
    void input()
    {
        cout << "Enter the name of the student: ";
        getline(cin, name);
        cout << "Enter the roll number: ";
        cin >> roll;
    }
};
class marks : public Student
{
private:
    float sub1, sub2, sub3, percentage, total;

public:
    void subject()
    {
        cout << "Enter the marks for the first subject: ";
        cin >> sub1;

        cout << "Enter the marks for the second subject: ";
        cin >> sub2;

        cout << "Enter the marks for the third subject: ";
        cin >> sub3;
    }

    void calculate()
    {
        total = sub1 + sub2 + sub3;
        percentage = (total / 300) * 100;
    }

    void display()
    {
        cout << "Academic Report" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll << endl;
        cout << "Total marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};
int main()
{
    marks stu;
    stu.input();
    stu.subject();
    stu.calculate();
    stu.display();

    return 0;
}
