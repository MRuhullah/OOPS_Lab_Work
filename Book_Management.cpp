#include <iostream>
#include <string>
#include <limits>

using namespace std;

const int MAX = 100;
string titles[MAX];
string authors[MAX];
int years[MAX];
int count = 0;

void display(int i)
{
    cout << "--- Index: " << i << " ---\n";
    cout << "Title: " << titles[i] << endl;
    cout << "Author: " << authors[i] << endl;
    cout << "Year: " << years[i] << endl;
    cout << "----------------------\n";
}

void add()
{
    if (count >= MAX)
    {
        cout << "Error: Library full.\n";
        return;
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "\n--- Add Book ---\n";
    cout << "Title: ";
    getline(cin, titles[count]);
    cout << "Author: ";
    getline(cin, authors[count]);
    cout << "Year: ";

    cin >> years[count];
    count++;
    cout << "Book added at index " << count - 1 << ".\n";
}

void view()
{
    if (count == 0)
    {
        cout << "\nLibrary is empty.\n";
        return;
    }
    cout << "\n--- Collection (" << count << " Books) ---\n";
    for (int i = 0; i < count; ++i)
    {
        display(i);
    }
}

void search()
{
    if (count == 0)
    {
        cout << "\nLibrary is empty, cannot search.\n";
        return;
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "\n--- Search ---\n";
    cout << "Enter query: ";
    string query;
    getline(cin, query);
    int found = 0;
    for (int i = 0; i < count; ++i)
    {
        if (titles[i].find(query) != string::npos || authors[i].find(query) != string::npos)
        {
            display(i);
            found++;
        }
    }
    cout << "\nSearch completed. " << found << " result(s) found.\n";
}

int main()
{
    int choice;
    cout << "Basic C++ Book Manager.\n";
    do
    {
        cout << "\n--- Menu ---\n1. Add Book\n2. View All\n3. Search\n4. Exit\nChoice: ";
        if (!(cin >> choice))
        {
            cout << "\nInvalid input.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            choice = 0;
            continue;
        }

        switch (choice)
        {
        case 1:
            add();
            break;
        case 2:
            view();
            break;
        case 3:
            search();
            break;
        case 4:
            cout << "Goodbye!\n";
            break;
        default:
            cout << "Invalid choice.\n";
            break;
        }
    } while (choice != 4);
    return 0;
}
