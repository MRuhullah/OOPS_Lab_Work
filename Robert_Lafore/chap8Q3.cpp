/*Modify the time class from Exercise 3 in Chapter 6 so that instead of a function
add_time() it uses the overloaded + operator to add two times. Write a program to test
this class.*/

#include <iostream>
using namespace std;

class Time
{
public:
    int hours, minutes;

    Time() : hours(0), minutes(0) {}

    Time operator+(Time t)
    {
        Time temp;
        temp.minutes = minutes + t.minutes;
        temp.hours = hours + t.hours + temp.minutes / 60;
        temp.minutes %= 60;
        return temp;
    }

    void get()
    {
        cin >> hours >> minutes;
    }
    void show()
    {
        cout << hours << " hours " << minutes << " minutes\n";
    }
};

int main()
{
    Time t1, t2, t3;
    t1.get();
    t2.get();
    t3 = t1 + t2;
    t3.show();
    return 0;
}
