/*Augment the time class referred to in Exercise 3 to include overloaded increment (++)
and decrement (--) operators that operate in both prefix and postfix notation and return
values. Add statements to main() to test these operators.*/

#include <iostream>
using namespace std;

class Time
{
public:
    int hours, minutes;

    Time() : hours(0), minutes(0) {}
    Time(int h, int m) : hours(h), minutes(m) {}

    Time operator++()
    {
        minutes++;
        if (minutes >= 60)
        {
            minutes -= 60;
            hours++;
        }
        return Time(hours, minutes);
    }

    Time operator++(int)
    {
        Time temp(hours, minutes);
        minutes++;
        if (minutes >= 60)
        {
            minutes -= 60;
            hours++;
        }
        return temp;
    }

    Time operator--()
    {
        minutes--;
        if (minutes < 0)
        {
            minutes += 60;
            hours--;
        }
        return Time(hours, minutes);
    }

    Time operator--(int)
    {
        Time temp(hours, minutes);
        minutes--;
        if (minutes < 0)
        {
            minutes += 60;
            hours--;
        }
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
    Time t;
    t.get();
    t = ++t;
    t.show();
    t = t++;
    t.show();
    t = --t;
    t.show();
    t = t--;
    t.show();
    return 0;
}
