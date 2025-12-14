#include <iostream>
using namespace std;

class bankaccount
{
public:
    virtual void interest() = 0;
};

class savingsaccount : public bankaccount
{
protected:
    int balance, rate;

public:
    savingsaccount() {}

    void details()
    {
        cout << "Enter Savings Account balance: ";
        cin >> balance;
        cout << "Enter interest rate (%): ";
        cin >> rate;
    }

    void interest()
    {
        cout << "Savings Account Interest: " << (balance * rate / 100) << "\n"
             << endl;
    }
};

class fixeddeposit : public bankaccount
{
protected:
    int principal, rate, years;

public:
    fixeddeposit() {}

    void details()
    {
        cout << "Enter Fixed Deposit principal: ";
        cin >> principal;
        cout << "Enter interest rate (%): ";
        cin >> rate;
        cout << "Enter number of years: ";
        cin >> years;
    }

    void interest()
    {
        double si = (principal * rate * years) / 100;
        cout << "Fixed Deposit Interest: " << si << "\n"
             << endl;
    }
};

class recurringdeposit : public bankaccount
{
protected:
    int monthlydep, rate, months;

public:
    recurringdeposit() {}

    void details()
    {
        cout << "Enter Recurring Deposit monthly deposit: ";
        cin >> monthlydep;
        cout << "Enter interest rate (%): ";
        cin >> rate;
        cout << "Enter number of months: ";
        cin >> months;
    }

    void interest()
    {
        double recint = (months * (months + 1) / 2.0) * monthlydep * rate / (12 * 100);
        cout << "Recurring Deposit Interest:\n " << recint << "\n"
             << endl;
    }
};

int main()
{
    bankaccount *acc;

    savingsaccount sa;
    sa.details();
    acc = &sa;
    acc->interest();

    fixeddeposit fd;
    fd.details();
    acc = &fd;
    acc->interest();

    recurringdeposit rd;
    rd.details();
    acc = &rd;
    acc->interest();

    return 0;
}
