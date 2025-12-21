/* Imagine a publishing company that markets both book and audiocassette versions of its
works. Create a class publication that stores the title (a string) and price (type float)
of a publication. From this class derive two classes: book, which adds a page count (type
int), and tape, which adds a playing time in minutes (type float). Each of these three
classes should have a getdata() function to get its data from the user at the keyboard,
and a putdata() function to display its data.
Write a main() program to test the book and tape classes by creating instances of them,
asking the user to fill in data with getdata(), and then displaying the data with putdata().*/

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
        cout << "Price: " << price << endl;
    }
};

class Book : public Publication
{
public:
    int pages;

    void getdata()
    {
        cout << "Enter book title: ";
        cin.ignore();
        getline(cin, title);
        cout << "Enter price: ";
        cin >> price;
        cout << "Enter page count: ";
        cin >> pages;
    }

    void putdata()
    {
        cout << "\nBook details:" << endl;
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
        cout << "Pages: " << pages << endl;
    }
};

class Tape : public Publication
{
public:
    float playTime;

    void getdata()
    {
        cout << "Enter tape title: ";
        cin.ignore();
        getline(cin, title);
        cout << "Enter price: ";
        cin >> price;
        cout << "Enter playing time (minutes): ";
        cin >> playTime;
    }

    void putdata()
    {
        cout << "\nTape details:" << endl;
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
        cout << "Playing time: " << playTime << " minutes" << endl;
    }
};

int main()
{
    Book b;
    Tape t;

    b.getdata();
    t.getdata();

    b.putdata();
    t.putdata();

    return 0;
}
