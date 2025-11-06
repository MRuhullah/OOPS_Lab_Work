#include <iostream>
using namespace std;
int sum(int a, int b, int c)
{
    return a + b + c;
}
int sum(int a, int b)
{
    return a + b;
}
string sum(string a, string b)
{
    return a+" " + b;
}
int main()
{
    int a, b, c;
    cout << "Enter the numbers: " << endl;
    cin >> a >> b >> c;

    string x, y;
    cout << "Enter the strings: " << endl;
    cin >> x >> y;

    cout << "Sum of 3 integers: " << sum(a, b, c) << endl;

    cout << "Sum of 2 integers: " << sum(a, b) << endl;

    cout << "Sum of 2 strings: " << sum(x, y) << endl;
    return 0;
}