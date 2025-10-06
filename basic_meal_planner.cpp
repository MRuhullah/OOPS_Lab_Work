#include <iostream>
#include <string>

using namespace std;

int main()
{
    string meals[7];
    int choice;
    int day;
    string meal;

    do
    {
        cout << "Simple Meal Planner\n";
        cout << "1. Add Meal\n";
        cout << "2. View Meals\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1)
        {
            cout << "Enter day number (1 for Monday to 7 for Sunday): ";
            cin >> day;
            cin.ignore();

            if (day < 1 || day > 7)
            {
                cout << "Invalid day number.\n";
            }
            else
            {
                cout << "Enter meal for day " << day << ": ";
                getline(cin, meal);
                meals[day - 1] = meal;
                cout << "Meal saved.\n";
            }
        }
        else if (choice == 2)
        {
            cout << "\n--- Weekly Meals ---\n";
            for (int i = 0; i < 7; i++)
            {
                cout << "Day " << (i + 1) << ": ";
                if (meals[i].empty())
                {
                    cout << "No meal set.\n";
                }
                else
                {
                    cout << meals[i] << endl;
                }
            }
        }
        else if (choice == 3)
        {
            cout << "Goodbye!\n";
        }
        else
        {
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 3);

    return 0;
}
