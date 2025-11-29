/*Create a class called time that has separate int member data for hours, minutes, and
seconds. One constructor should initialize this data to 0, and another should initialize it
to fixed values. Another member function should display it, in 11:59:59 format. The final
member function should add two objects of type time passed as arguments.
A main() program should create two initialized time objects (should they be const?) and
one that isn’t initialized. Then it should add the two initialized values together, leaving the
result in the third time variable. Finally it should display the value of this third variable.
Make appropriate member functions const.*/

#include <iostream>
#include <iomanip>
using namespace std;
class Time
{
private:
    int hours, minutes, seconds;

public:
    Time() : hours(0), minutes(0), seconds(0) {}
    Time(int hr, int min, int sec) : hours(hr), minutes(min), seconds(sec) {}
    void display()
    {
        cout << "Time: ";
        cout << setfill('0') << setw(2) << hours << ":" << setw(2) << minutes << ":" << setw(2) << seconds;
    }
    void add(Time t1, Time t2)
    {
        seconds = t1.seconds + t2.seconds;
        minutes = t1.minutes + t2.minutes;
        hours = t1.hours + t2.hours;
        if (seconds >= 60)
        {
            minutes += seconds / 60;
            seconds = seconds % 60;
        }
        if (minutes >= 60)
        {
            hours += minutes / 60;
            minutes = minutes % 60;
        }
    }
};
int main()
{
    const Time time1(3, 45, 32);
    const Time time2(4, 35, 22);
    Time Time3;
    Time3.add(time1, time2);
    Time3.display();

    return 0;
}