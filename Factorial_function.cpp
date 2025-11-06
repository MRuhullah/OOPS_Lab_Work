#include<iostream>
using namespace std;
int factorial(int num)
{
    if (num == 1)
    return 1;

    return num * factorial(num - 1);
}
int main()
{
    int num;
    cout << "Enter the number for which you wanna find factorial" << endl;
    cin >> num;

    int result = factorial(num);
    cout << "Factorial of " << num << " is: " << result << endl;

    return 0;
}