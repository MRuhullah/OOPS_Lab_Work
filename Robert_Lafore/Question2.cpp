/*. Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a 50 cent
toll. Mostly they do, but sometimes a car goes by without paying. The tollbooth keeps
track of the number of cars that have gone by, and of the total amount of money collected.
Model this tollbooth with a class called tollBooth. The two data items are a type
unsigned int to hold the total number of cars, and a type double to hold the total amount
of money collected. A constructor initializes both of these to 0. A member function called
payingCar() increments the car total and adds 0.50 to the cash total. Another function,
called nopayCar(), increments the car total but adds nothing to the cash total. Finally, a
member function called display() displays the two totals. Make appropriate member
functions const.
Include a program to test this class. This program should allow the user to push one key
to count a paying car, and another to count a nonpaying car. Pushing the Esc key should
cause the program to print out the total cars and total cash and then exit.  */
#include <iostream>
#include <conio.h>
using namespace std;
class tollbooth
{
private:
    unsigned int totalcars;
    double totalamount;

public:
    tollbooth() : totalcars(0), totalamount(0.0) {}

    void payingcar()
    {
        totalcars++;
        totalamount += 0.50;
    }

    void non_payingcar()
    {
        totalcars++;
    }

    void display()
    {
        cout << "Total Cars Passed: " << totalcars << endl;
        cout << "Total Amount Collected: " << totalamount << endl;
    }
};

int main()
{
    tollbooth toll;
    cout << "Press 'P' or 'p' for the cars who have paid the toll" << endl;
    cout << "Press 'N' or 'n' for the cars who have not paid the toll" << endl;
    cout << "Press 'ESC' to watch the total amount collected and total cars that have passed" << endl;

    while (true)
    {
        char ch = _getch();

        if (ch == 'P' || ch == 'p')
        {
            toll.payingcar();
        }
        else if (ch == 'N' || ch == 'n')
        {
            toll.non_payingcar();
        }
        else if (ch == 27)
        {
            toll.display();
            break;
        }
        else
            cout << "You pressed the wrong key" << endl;
    }
    return 0;
}