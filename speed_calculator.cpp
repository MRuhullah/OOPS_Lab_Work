#include <iostream>
using namespace std;
class Speed
{
private:
    double distance, time, speed;

public:
    Speed(double d, double t)
    {
        distance = d;
        time = t;
        speed = 0;
    }
    void calculate()
    {
        speed = distance / time;
    }
    void display()
    {
        cout << "Speed: " << speed << " km/hr" << endl;
    }
};
int main()
{
    double distance, time;
    cout << "Enter distance (km): ";
    cin >> distance;

    cout << "Enter time (hours): ";
    cin >> time;

    Speed s(distance, time);
    s.calculate();
    s.display();
    return 0;
}