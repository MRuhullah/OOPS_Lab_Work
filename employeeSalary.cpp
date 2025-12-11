#include <iostream>
using namespace std;

class Employee
{
public:
    virtual void calculate()
    {
        cout << "EMPLOYEE SALARY" << endl;
    }
};

class fulltimeemployee : public Employee
{
protected:
    int basic, allowances;

public:
    fulltimeemployee(int b, int a) : basic(b), allowances(a) {}

    void calculate() override
    {
        cout << "Full Time Employee Salary: "
             << basic + allowances << endl;
    }
};

class parttimeemployee : public Employee
{
protected:
    int hours_per_week, rate;

public:
    parttimeemployee(int h, int r) : hours_per_week(h), rate(r) {}

    void calculate() override
    {
        cout << "Part Time Employee Salary: "
             << hours_per_week * rate << endl;
    }
};

class Intern : public Employee
{
protected:
    int stipend;

public:
    Intern(int s) : stipend(s) {}

    void calculate() override
    {
        cout << "Intern Salary: " << stipend << endl;
    }
};

int main()
{
    int choice;
    Employee *emp = nullptr;

    cout << "1. Full Time Employee\n";
    cout << "2. Part Time Employee\n";
    cout << "3. Intern\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1)
    {
        int basic, allowance;
        cout << "Enter basic salary: ";
        cin >> basic;
        cout << "Enter allowance: ";
        cin >> allowance;

        fulltimeemployee f(basic, allowance);
        emp = &f;
        emp->calculate();
    }
    else if (choice == 2)
    {
        int hours, rate;
        cout << "Enter hours worked per week: ";
        cin >> hours;
        cout << "Enter rate per hour: ";
        cin >> rate;

        parttimeemployee p(hours, rate);
        emp = &p;
        emp->calculate();
    }
    else if (choice == 3)
    {
        int stipend;
        cout << "Enter stipend: ";
        cin >> stipend;

        Intern i(stipend);
        emp = &i;
        emp->calculate();
    }
    else
    {
        cout << "Invalid choice......." << endl;
    }

    return 0;
}
