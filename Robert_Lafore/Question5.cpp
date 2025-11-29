/*Start with the date structure in Exercise 5 in Chapter 4 and transform it into a date
class. Its member data should consist of three ints: month, day, and year. It should also
have two member functions: getdate(), which allows the user to enter a date in
12/31/02 format, and showdate(), which displays the date. */

#include <iostream>
using namespace std;
class date
{
private:
    int month, day, year;

public:
    date() : month(0), day(0), year(0) {}
    void getdate()
    {
        char S1, S2;
        cout << " Enter the date(MM/DD/YYYY)" << endl;
        cin >> month >> S1 >> day >> S2 >> year;
    }
    void showdate()
    {
        cout << " The date you entered is : " << month << "/" << day << "/" << year;
    }
};

int main()
{
    date D1;
    D1.getdate();
    D1.showdate();
    return 0;
}