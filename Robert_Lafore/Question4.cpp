/*Create an employee class, basing it on Exercise 4 of Chapter 4. The member data should
comprise an int for storing the employee number and a float for storing the employee’s
compensation. Member functions should allow the user to enter this data and display it.
Write a main() that allows the user to enter data for three employees and display it.*/

#include <iostream>
using namespace std;
class Employee
{
private:
    int emp_no;
    float compensation;

public:
    Employee() : emp_no(0), compensation(0) {}

    void input()
    {
        cout << "Enter employee number: ";
        cin >> emp_no;
        cout << "Enter employee compensation: ";
        cin >> compensation;
    }
    void display()
    {
        cout << "Employee number: " << emp_no << endl;
        cout << "Employee compensation: " << compensation << endl;
    }
};
int main()
{
    Employee E1, E2, E3;
    E1.input();
    E2.input();
    E3.input();
    E1.display();
    E2.display();
    E3.display();
    return 0;
}