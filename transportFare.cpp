#include <iostream>
using namespace std;
class transport
{
public:
    virtual void fare(int distance) = 0;
};
class bus : public transport
{
public:
    void fare(int distance)
    {
        int busFare = distance * 5;
        cout << "Bus fare for " << distance << " km: " << busFare << endl;
    }
};

class train : public transport
{
public:
    void fare(int distance)
    {
        int trainFare = distance * 10;
        cout << "Train fare for " << distance << " km: " << trainFare << endl;
    }
};

class flight : public transport
{
public:
    void fare(int distance)
    {
        int flightFare = distance * 50;
        cout << "Flight fare for " << distance << " km: " << flightFare << endl;
    }
};
int main()
{
    int distance;
    cout << "Enter distance in km: ";
    cin >> distance;

    transport *t;

    bus b;
    t = &b;
    t->fare(distance);

    train tr;
    t = &tr;
    t->fare(distance);

    flight f;
    t = &f;
    t->fare(distance);

    return 0;
}