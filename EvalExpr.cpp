#include <iostream>
using namespace std;

int main()
{

    double a, b, c;
    string type1, type2, type3;
    char op1, op2;

    cout << "Enter first number and its type (int/float/double): ";
    cin >> a >> type1;

    cout << "Enter first operator (+, -, *, /): ";
    cin >> op1;

    cout << "Enter second number and its type (int/float/double): ";
    cin >> b >> type2;

    cout << "Enter second operator (+, -, *, /): ";
    cin >> op2;

    cout << "Enter third number and its type (int/float/double): ";
    cin >> c >> type3;

    double result;

    if (op2 == '*' || op2 == '/')
    {

        double temp;
        if (op2 == '*')
        {
            temp = b * c;
        }
        else
        {
            if (c == 0)
            {
                cout << "Error: Division by zero!" << endl;
                return 1;
            }
            temp = b / c;
        }

        if (op1 == '+')
        {
            result = a + temp;
        }
        else if (op1 == '-')
        {
            result = a - temp;
        }
        else if (op1 == '*')
        {
            result = a * temp;
        }
        else if (op1 == '/')
        {
            if (temp == 0)
            {
                cout << "Error: Division by zero!" << endl;
                return 1;
            }
            result = a / temp;
        }
    }
    else
    {

        double temp;
        if (op1 == '+')
        {
            temp = a + b;
        }
        else if (op1 == '-')
        {
            temp = a - b;
        }
        else if (op1 == '*')
        {
            temp = a * b;
        }
        else if (op1 == '/')
        {
            if (b == 0)
            {
                cout << "Error: Division by zero!" << endl;
                return 1;
            }
            temp = a / b;
        }

        if (op2 == '+')
        {
            result = temp + c;
        }
        else if (op2 == '-')
        {
            result = temp - c;
        }
        else if (op2 == '*')
        {
            result = temp * c;
        }
        else if (op2 == '/')
        {
            if (c == 0)
            {
                cout << "Error: Division by zero!" << endl;
                return 1;
            }
            result = temp / c;
        }
    }

    cout << "Result: " << result << endl;

    return 0;
}
