/*Create a function called swaps() that interchanges the values of the two arguments sent
to it. (You will probably want to pass these arguments by reference.) Make the function
into a template, so it can be used with all numerical data types (char, int, float, and so
on). Write a main() program to exercise the function with several types.*/

#include <iostream>
using namespace std;

template <typename T>
void swaps(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{

    int x = 10, y = 20;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swaps(x, y);
    cout << "After swap: x = " << x << ", y = " << y << endl
         << endl;

    double p = 3.5, q = 7.2;
    cout << "Before swap: p = " << p << ", q = " << q << endl;
    swaps(p, q);
    cout << "After swap: p = " << p << ", q = " << q << endl
         << endl;

    char c1 = 'A', c2 = 'Z';
    cout << "Before swap: c1 = " << c1 << ", c2 = " << c2 << endl;
    swaps(c1, c2);
    cout << "After swap: c1 = " << c1 << ", c2 = " << c2 << endl;

    return 0;
}
