#include <iostream>
using namespace std;
int main()
{
    int Employee_Id, Num;
    double Hourly_Rate, Hours, Gross_pay, Tax, Net_pay, Average;

    cout << "Enter the number of employees" << endl;
    cin >> Num;

    for (int i = 0; i < Num; i++)
    {
        cout << "Enter the employee Id for your employee No " << i + 1 << endl;
        cin >> Employee_Id;

        cout << "Enter hourly wage rate for your employee" << endl;
        cin >> Hourly_Rate;

        cout << "Enter how many hours your employee has worked in a week" << endl;
        cin >> Hours;

        cout << endl;

        if (Hours <= 40 && Hours > 0)
        {
            Gross_pay = Hours * Hourly_Rate;
            Tax = Gross_pay * 0.03625;
            Net_pay = Gross_pay - Tax;
            cout << "Gross pay: " << Gross_pay << endl;
            cout << "Net Pay: " << Net_pay << endl;
        }
        else
        {
            Gross_pay = Hours * Hourly_Rate * 1.5;
            Tax = Gross_pay * 0.03625;
            Net_pay = Gross_pay - Tax;

            cout << "Gross Pay: " << Gross_pay << endl;
            cout << "Net Pay: " << Net_pay << endl;
        }
    }

    Average++;

    cout <<"Total Payroll of all employees: " << Average <<endl;
}