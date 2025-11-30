/* To the Distance class in the ENGLPLUS program in this chapter, add an overloaded
- operator that subtracts two distances. It should allow statements like dist3=
dist1-dist2;. Assume that the operator will never be used to subtract a larger number
from a smaller one (that is, negative distances are not allowed).*/

#include <iostream>
using namespace std;

class Distance
{
public:
    int feet;
    float inches;

    Distance() : feet(0), inches(0) {}

    Distance operator-(Distance d)
    {
        Distance temp;
        temp.feet = feet - d.feet;
        temp.inches = inches - d.inches;
        if (temp.inches < 0)
        {
            temp.inches += 12;
            temp.feet -= 1;
        }
        return temp;
    }

    void get() { cin >> feet >> inches; }
    void show() { cout << feet << " feet " << inches << " inches\n"; }
};

int main()
{
    Distance d1, d2, d3;
    d1.get();
    d2.get();
    d3 = d1 - d2;
    d3.show();
    return 0;
}
