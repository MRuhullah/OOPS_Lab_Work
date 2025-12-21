/* Start with the publication, book, and tape classes of Exercise 1. Add a base class sales
that holds an array of three floats so that it can record the dollar sales of a particular
publication for the last three months. Include a getdata() function to get three sales
amounts from the user, and a putdata() function to display the sales figures. Alter the
book and tape classes so they are derived from both publication and sales. An object
of class book or tape should input and output sales data along with its other data. Write
a main() function to create a book object and a tape object and exercise their input/output
capabilities.*/

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
        cin.ignore();
        getline(cin, title);
        cin >> price;
    }

    void putdata()
    {
        cout << title << endl;
        cout << price << endl;
    }
};

class Sales
{
public:
    float sales[3];

    void getdata()
    {
        for (int i = 0; i < 3; i++)
            cin >> sales[i];
    }

    void putdata()
    {
        for (int i = 0; i < 3; i++)
            cout << sales[i] << " ";
        cout << endl;
    }
};

class Book : public Publication, public Sales
{
public:
    int pages;

    void getdata()
    {
        Publication::getdata();
        cin >> pages;
        Sales::getdata();
    }

    void putdata()
    {
        Publication::putdata();
        cout << pages << endl;
        Sales::putdata();
    }
};

class Tape : public Publication, public Sales
{
public:
    float playTime;

    void getdata()
    {
        Publication::getdata();
        cin >> playTime;
        Sales::getdata();
    }

    void putdata()
    {
        Publication::putdata();
        cout << playTime << endl;
        Sales::putdata();
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
