#include <iostream>
using namespace std;
class Distance
{
private:
    int meter, centimeter;

public:
    Distance(int m)
    {
        meter = m;
        centimeter = 0;
    }
    Distance(int m, int cm)
    {
        meter = m;
        centimeter = cm;
        normalize();
    }

    void normalize()
    {
        if (centimeter >= 100)
        {
            meter += centimeter / 100;
            centimeter = centimeter % 100;
        }
    }
    Distance operator+(Distance d)
    {
        Distance result(0, 0);
        result.meter = meter + d.meter;
        result.centimeter = centimeter + d.centimeter;
        result.normalize();
        return result;
    }
    void display()
    {
        cout << meter << " Meter " << centimeter << " Centimeter" << endl;
    }
};
int main()
{
    int meter, centimeter;
    cout << "Enter the first distance(m,cm): " << endl;
    cin >> meter >> centimeter;
    cout << "Enter the second distance(m,cm): " << endl;
    cin >> meter >> centimeter;

    Distance d1(meter, centimeter);
    Distance d2(meter, centimeter);

    Distance total = d1 + d2;
    total.display();

    return 0;
}