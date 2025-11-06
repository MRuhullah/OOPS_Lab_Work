#include <iostream>
using namespace std;
float simple_interest(float p, float r = 5.0, float t = 2.0)
{
    return (p * r * t) / 100;
}
int main()
{
    float principal;
    cout << "Enter the principal amount: " << endl;
    cin >> principal;

    cout << "Simple interest: " << simple_interest(principal, 6.0, 4.0) << endl;

    cout << "Simple interest: " << simple_interest(principal, 6.0) << endl;

    cout << "Simple interest: " << simple_interest(principal) << endl;

    return 0;
}