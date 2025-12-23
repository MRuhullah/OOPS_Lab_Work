/*There is only one kind of manager in the EMPMULT program in this chapter. Any serious
company has executives as well as managers. From the manager class derive a class
called executive. (We’ll assume an executive is a high-end kind of manager.) The additional data in the executive class will be the size of the employee’s yearly bonus and the
number of shares of company stock held in his or her stock-option plan. Add the appropriate
member functions so these data items can be input and displayed along with the other
manager data.*/

#include <iostream>
#include <string>
using namespace std;

class Manager
{
public:
    string name;
    int empID;
    float salary;

    void getdata()
    {
        cin.ignore();
        getline(cin, name);
        cin >> empID >> salary;
    }

    void putdata()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << empID << endl;
        cout << "Salary: $" << salary << endl;
    }
};

class Executive : public Manager
{
public:
    float bonus;
    int shares;

    void getdata()
    {
        Manager::getdata();
        cin >> bonus >> shares;
    }

    void putdata()
    {
        Manager::putdata();
        cout << "Bonus: $" << bonus << endl;
        cout << "Shares: " << shares << endl;
    }
};

int main()
{
    Executive e;
    e.getdata();
    e.putdata();
    return 0;
}
