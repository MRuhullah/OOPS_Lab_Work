#include <iostream>
#include <string>

using namespace std;

int main()
{

    int Consumer_Number, Previous_Month_readings, Current_Month_readings, Units;
    float Bill;
    string Consumer_Name, ER_Connection;

    cout << "Please enter your Consumer Number" << endl;
    cin >> Consumer_Number;

    cout << "Please enter your Consumer Name" << endl;
    cin >> Consumer_Name;
    cin.ignore();
    getline(cin, Consumer_Name);

    cout << "Enter previous month readings" << endl;
    cin >> Previous_Month_readings;

    cout << "Enter current month readings" << endl;
    cin >> Current_Month_readings;

    cout << "Which tyoe of connection do you use(domestic/commercial)?" << endl;
    cin >> ER_Connection;

    Units = Current_Month_readings - Previous_Month_readings;

    if (Units < 0)
    {
        cout << "Error.......Invalid readings" << endl;
    }

    if (ER_Connection == "domestic")
    {
        if (Units <= 100)
            Bill = Units * 1;

        else if (Units <= 200)
            Bill = 100 * 1 + (Units - 100) * 2.5;

        else if (Units <= 500)
            Bill = 100 * 1 + 100 * 2.5 + (Units - 200) * 4;

        else
            Bill = 100 * 1 + 100 * 2.5 + 300 * 4 + (Units - 500) * 6;
    }

    else if (ER_Connection == "commercial")
    {
        if (Units <= 100)
            Bill = Units * 2;

        else if (Units <= 200)
            Bill = 100 * 2 + (Units - 100) * 4.5;

        else if (Units <= 500)
            Bill = 100 * 2 + 100 * 4.5 + (Units - 200) * 6;

        else
            Bill = 100 * 2 + 100 * 4.5 + 300 * 6 + (Units - 500) * 7;
    }

    else

        cout << "Invalid choice" << endl;

    cout << "\nElectricity Bill\n";
    cout << "Consumer Number : " << Consumer_Number << endl;
    cout << "Consumer Number : " << Consumer_Number << endl;
    cout << "Units Consumed  : " << Units << endl;
    cout << "Connection Type : " << ER_Connection << endl;
    cout << "Total Bill Amount: " << Bill << endl;
}