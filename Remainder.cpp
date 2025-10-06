#include <iostream>
#include <string>

using namespace std;

int main()
{
    const int MAX_REMINDERS = 10;
    string reminders[MAX_REMINDERS];
    int reminderCount = 0;
    int choice;

    do
    {
        cout << "Reminder App\n";
        cout << "1. Add Reminder\n";
        cout << "2. View Reminders\n";
        cout << "3. Delete Reminder\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1)
        {
            if (reminderCount < MAX_REMINDERS)
            {
                cout << "Enter your reminder: ";
                getline(cin, reminders[reminderCount]);
                reminderCount++;
                cout << "Reminder added successfully.\n";
            }
            else
            {
                cout << "Reminder list is full!\n";
            }
        }
        else if (choice == 2)
        {
            if (reminderCount == 0)
            {
                cout << "No reminders yet.\n";
            }
            else
            {
                cout << "\n--- Your Reminders (" << reminderCount << ") ---\n";
                for (int i = 0; i < reminderCount; i++)
                {
                    cout << i + 1 << ". " << reminders[i] << endl;
                }
            }
        }
        else if (choice == 3)
        {
            if (reminderCount == 0)
            {
                cout << "No reminders to delete.\n";
            }
            else
            {
                int deleteIndex;
                cout << "Enter the number of the reminder to delete: ";
                cin >> deleteIndex;
                cin.ignore(); // clear buffer

                if (deleteIndex < 1 || deleteIndex > reminderCount)
                {
                    cout << "Invalid number.\n";
                }
                else
                {

                    for (int i = deleteIndex - 1; i < reminderCount - 1; i++)
                    {
                        reminders[i] = reminders[i + 1];
                    }
                    reminderCount--;
                    cout << "Reminder deleted.\n";
                }
            }
        }
        else if (choice == 4)
        {
            cout << "Goodbye!\n";
        }
        else
        {
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 4);

    return 0;
}
