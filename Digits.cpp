#include <iostream>
using namespace std;

int main()
{
    int num, digit;
    int sum = 0, product = 1;

    cout << "Enter an integer: ";
    cin >> num;

    
    if (num < 0)
    {
        num = -num;
    }

    int temp = num;

    if (num == 0)
    {
        sum = 0;
        product = 0;
    }
    else
    {
        while (num > 0)
        {
            digit = num % 10;
            sum += digit;
            product *= digit;
            num /= 10;
        }
    }

    cout << "Sum of digits of " << temp << " = " << sum << endl;
    cout << "Product of digits of " << temp << " = " << product << endl;

    return 0;
}
