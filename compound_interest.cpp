#include <iostream>
#include <cmath>
using namespace std;
class Compoundinterest
{
private:
    int principal, rate, time, num;
    double amount, compoundinterest;

public:
    Compoundinterest(int p, int r, int t, int n = 1)
    {
        principal = p;
        rate = r;
        time = t;
        num = n;
    }

    void calculate()
    {
        amount = principal * pow((1 + (double)rate / num), num * time);
        compoundinterest = amount - principal;
    }
    void display()
    {
        cout << "Principal: " << principal << endl;
        cout << "Rate: " << rate << endl;
        cout << "Time: " << time << " years" << endl;
        cout << "Compounded " << num << " times per year" << endl;
        cout << "Compound Interest: " << compoundinterest << endl;
        cout << "Total Amount: " << amount << endl;
    }
};

int main()
{
    int time, principal, rate, num;
    cout << "Enter principal,time and rate:" << endl;
    cin >> principal >> time >> rate;
    cout << "Enter how many times it will be compounded:" << endl;
    cin >> num;

    Compoundinterest c1(principal, rate, time, num);
    c1.calculate();
    c1.display();

    cout << "\nWith default N:" << endl;
    Compoundinterest c2(principal, rate, time);
    c2.calculate();
    c2.display();

    return 0;
}