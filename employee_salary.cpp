#include <iostream>
using namespace std;

class Employee
{
protected:
    string name;
    int emp_id;

public:
    Employee() : name(""), emp_id(0) {}
    void input()
    {
        cout << "Enter the name of the employee ";
        getline(cin, name);
        cout << "Enter employee ID: ";
        cin >> emp_id;
    }
};
class Salary : public Employee
{
private:
    float salary, allowances, deduction, net_sal;

public:
    void data()
    {
        cout << "Enter salary: ";
        cin >> salary;
    }

    void calculate()
    {
        allowances = 0.02 * salary;
        deduction = 0.03 * salary;
        net_sal = salary - allowances - deduction;
    }

    void display()
    {
        cout << "Salary Slip" << endl;
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << emp_id << endl;
        cout << "Salary: " << salary << endl;
        cout << "Allowances: " << allowances << endl;
        cout << "Deduction: " << deduction << endl;
        cout << "Net salary: " << net_sal << endl;
    }
};
int main()
{
    Salary empy;
    empy.input();
    empy.data();
    empy.calculate();
    empy.display();

    return 0;
}