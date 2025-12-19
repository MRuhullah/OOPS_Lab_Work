/*Create a class Int based on Exercise 1 in Chapter 6. Overload four integer arithmetic
operators (+, -, *, and /) so that they operate on objects of type Int. If the result of any
such arithmetic operation exceeds the normal range of ints (in a 32-bit environment)—
from 2,147,483,648 to –2,147,483,647—have the operator print a warning and terminate
the program. Such a data type might be useful where mistakes caused by arithmetic overflow are unacceptable. Hint: To facilitate checking for overflow, perform the calculations
using type long double. Write a program to test this class.*/

#include <iostream>
#include <climits>
using namespace std;

class Int
{
public:
    int value;

    void get()
    {
        cin >> value;
    }
    void show()
    {
        cout << value << endl;
    }

    Int operator+(Int b)
    {
        long double temp = (long double)value + b.value;
        if (temp > INT_MAX || temp < INT_MIN)
            exit(1);

        Int r;
        r.value = (int)temp;
        return r;
    }
    Int operator-(Int b)
    {
        long double temp = (long double)value - b.value;
        if (temp > INT_MAX || temp < INT_MIN)
            exit(1);

        Int r;
        r.value = (int)temp;
        return r;
    }
    Int operator*(Int b)
    {
        long double temp = (long double)value * b.value;
        if (temp > INT_MAX || temp < INT_MIN)
            exit(1);

        Int r;
        r.value = (int)temp;
        return r;
    }
    Int operator/(Int b)
    {
        long double temp = (long double)value / b.value;
        if (temp > INT_MAX || temp < INT_MIN)
            exit(1);

        Int r;
        r.value = (int)temp;
        return r;
    }
};

int main()
{
    Int a, b, c;
    a.get();
    b.get();
    c = a + b;
    c.show();
    c = a - b;
    c.show();
    c = a * b;
    c.show();
    c = a / b;
    c.show();
    return 0;
}
