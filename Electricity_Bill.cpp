#include <iostream>
#include <string>

using namespace std;

int main()
{

    int Consumer_Number, Previous_Month_readings, Current_Month_readings;
    string Consumer_Name, ER_Connection,domestic,commercial;

    cout << "Please enter your Consumer Number" << endl;
    cin >> Consumer_Number;

    cout << "Please enter your Consumer Name" << endl;
    cin >> Consumer_Name;

    cout << "Enter previous month readings" << endl;
    cin >> Previous_Month_readings;

    cout << "Enter current month readings" << endl;
    cin >> Current_Month_readings;

    cout << "Which tyoe of connection do you have(IN SMALL)?" << endl;
    cin >> ER_Connection;

    if(ER_Connection == domestic)
    {
        
    }
}