#include <iostream>
using namespace std;
class interest
{
public:
    float p, r;
    int t;

    interest(float prin, float rate, int time)
    {
        p = prin;
        r = rate;
        t = time;
        cout << "Here is your result : ";
    }

    void calculate()
    {
        double res = (p * r * t) / 100;
        cout << res << endl;
    }
};

int main()
{
    float p, r;
    int t;
    cout << "Enter Principal amount" << endl;
    cin >> p;

    cout << "Enter Rate" << endl;
    cin >> r;

    cout << "Enter time" << endl;
    cin >> t;

    interest i1(p, r, t);
    i1.calculate();
}
