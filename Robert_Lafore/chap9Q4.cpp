/*Assume that the publisher in Exercises 1 and 3 decides to add a third way to distribute
books: on computer disk, for those who like to do their reading on their laptop. Add a
disk class that, like book and tape, is derived from publication. The disk class should
incorporate the same member functions as the other classes. The data item unique to this
class is the disk type: either CD or DVD. You can use an enum type to store this item.
The user could select the appropriate type by typing c or d.*/

#include <iostream>
#include <string>
using namespace std;

class Publication
{
public:
    string title;
    float price;

    void getdata()
    {
        cout << "Enter title: ";
        cin.ignore();
        getline(cin, title);
        cout << "Enter price: ";
        cin >> price;
    }

    void putdata()
    {
        cout << "Title: " << title << endl;
        cout << "Price: $" << price << endl;
    }
};

class Sales
{
public:
    float sales[3];

    void getdata()
    {
        cout << "Enter sales for last 3 months: ";
        for (int i = 0; i < 3; i++)
            cin >> sales[i];
    }

    void putdata()
    {
        cout << "Sales for last 3 months: ";
        for (int i = 0; i < 3; i++)
            cout << "$" << sales[i] << " ";
        cout << endl;
    }
};

class Book : public Publication, public Sales
{
public:
    int pages;

    void getdata()
    {
        cout << "Enter book details:" << endl;
        Publication::getdata();
        cout << "Enter page count: ";
        cin >> pages;
        Sales::getdata();
    }

    void putdata()
    {
        cout << "\nBook details:" << endl;
        Publication::putdata();
        cout << "Pages: " << pages << endl;
        Sales::putdata();
    }
};

class Tape : public Publication, public Sales
{
public:
    float playTime;

    void getdata()
    {
        cout << "Enter tape details:" << endl;
        Publication::getdata();
        cout << "Enter playing time (minutes): ";
        cin >> playTime;
        Sales::getdata();
    }

    void putdata()
    {
        cout << "\nTape details:" << endl;
        Publication::putdata();
        cout << "Playing time: " << playTime << " minutes" << endl;
        Sales::putdata();
    }
};

class Disk : public Publication
{
public:
    string type;

    void getdata()
    {
        cout << "Enter disk details:" << endl;
        Publication::getdata();
        cout << "Enter disk type (CD or DVD): ";
        cin >> type;
    }

    void putdata()
    {
        cout << "\nDisk details:" << endl;
        Publication::putdata();
        cout << "Disk type: " << type << endl;
    }
};

int main()
{
    Book b;
    Tape t;
    Disk d;

    b.getdata();
    t.getdata();
    d.getdata();

    b.putdata();
    t.putdata();
    d.putdata();

    return 0;
}
