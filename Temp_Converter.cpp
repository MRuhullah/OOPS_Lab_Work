#include <iostream>
using namespace std;
class temperature
{
public:
    double c;
    temperature(double celsius)
    {
        c = celsius;

        cout << "Value in Celsius: ";
        cout << c << endl;
    }
    void showVal()
    {
        double res = (c * (9.0 / 5.0)) + 32;
        cout << "Value in farenheit: ";
        cout << res << endl;
    }
};
int main()
{
    double cels;
    cout << "Enter the value in celsius" << endl;
    cin >> cels;
    temperature t1(cels);
    t1.showVal();
}
