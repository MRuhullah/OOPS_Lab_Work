#include <iostream>
using namespace std;

class bmi
{
public:
    float w, h;
    double res;

    bmi(float weight, float height)
    {
        w = weight;
        h = height;
        cout << "Here is your BMI: ";
    }

    void calculate()
    {
        res = w / (h * h);
        cout << res << endl;
    }

    void category()
    {
        if (res < 18.5)
        {
            cout << "You are Underweight" << endl;
        }
        else if (res >= 18.5 && res <= 24.9)
        {
            cout << "You have normal weight" << endl;
        }
        else
        {
            cout << "You are Overweight" << endl;
        }
    }
};

int main()
{
    float w, h;

    cout << "Enter Weight (KG): ";
    cin >> w;

    cout << "Enter Height (m): ";
    cin >> h;

    bmi b1(w, h);
    b1.calculate();
    b1.category();
}
