#include <iostream>
#include <iomanip>
using namespace std;

class Time
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time(int h = 0, int m = 0, int s = 0) : hours(h), minutes(m), seconds(s) {}

    void display24hour() const
    {
        cout << setw(2) << setfill('0') << hours << ":"
             << setw(2) << setfill('0') << minutes << ":"
             << setw(2) << setfill('0') << seconds;
    }

    void display12hour() const
    {
        int hour12 = hours % 12;
        if (hour12 == 0)
            hour12 = 12;

        string period = (hours < 12) ? "AM" : "PM";

        cout << setw(2) << setfill('0') << hour12 << ":"
             << setw(2) << setfill('0') << minutes << ":"
             << setw(2) << setfill('0') << seconds << " "
             << period;
    }

    friend ostream &operator<<(ostream &out, const Time &t)
    {
        out << "24 HOUR FORMAT: ";
        t.display24hour();
        out << " | 12 HOUR FORMAT: ";
        t.display12hour();
        return out;
    }
};

int main()
{
    Time t1(14, 30, 45);
    cout << t1 << endl;
    return 0;
}
