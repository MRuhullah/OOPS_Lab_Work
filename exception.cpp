#include <iostream>
using namespace std;

int main()
{
    double a, b;

    try
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;

        // Handle invalid (non-numeric) input
        if (cin.fail())
        {
            throw "Invalid input! Please enter numeric values.";
        }

        // Handle division by zero
        if (b == 0)
        {
            throw 0;
        }

        // Perform division
        cout << "Result = " << a / b << endl;
    }
    catch (int)
    {
        cout << "Error: Division by zero is not allowed." << endl;
    }
    catch (const char *msg)
    {
        cout << "Error: " << msg << endl;
    }

    return 0;
}
/*#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
    double a, b;

    try
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;

        // Invalid input
        if (cin.fail())
        {
            throw invalid_argument("Invalid input: please enter numeric values");
        }

        // Division by zero
        if (b == 0)
        {
            throw runtime_error("Division by zero not allowed");
        }

        cout << "Result = " << a / b << endl;
    }
    catch (const invalid_argument& e)
    {
        cout << "Input Error: " << e.what() << endl;
    }
    catch (const runtime_error& e)
    {
        cout << "Math Error: " << e.what() << endl;
    }
    catch (const exception& e)
    {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
*/