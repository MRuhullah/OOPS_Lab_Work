#include <iostream>
using namespace std;

class Account
{
protected:
    double balance;

public:
    Account() : balance(0.0) {}
};

class savingsaccount : public Account
{
public:
    void deposit(double amount)
    {
        if (amount > 0)
            balance += amount;
    }

    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
            balance -= amount;
    }

    void displayBalance()
    {
        cout << "Current Balance: " << balance << endl;
    }
};

int main()
{
    double amount;
    int choice;
    savingsaccount acc;
    do
    {
        cout << "\n1. Deposit\n2. Withdraw\n3. Display Balance\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter deposit amount: ";
            cin >> amount;
            acc.deposit(amount);
            break;

        case 2:
            cout << "Enter withdrawal amount: ";
            cin >> amount;
            acc.withdraw(amount);
            break;

        case 3:
            acc.displayBalance();
            break;
        }
    } while (choice != 4);

    return 0;
}
