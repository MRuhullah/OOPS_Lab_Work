/*Transform the fraction structure from Exercise 8 in Chapter 4 into a fraction class.
Member data is the fraction’s numerator and denominator. Member functions should
accept input from the user in the form 3/5, and output the fraction’s value in the same
format. Another member function should add two fraction values. Write a main() program
that allows the user to repeatedly input two fractions and then displays their sum. After
each operation, ask whether the user wants to continue.*/

#include <iostream>
using namespace std;
class fraction
{
private:
    int num, den;

public:
    fraction() : num(0), den(1) {}

    void input()
    {
        char S;
        cout << " Enter fraction(num/den)" << endl;
        cin >> num >> S >> den;
        if (den == 0)
        {
            cout << " Invalid denominator" << endl;
            den = 1;
        }
    }
    void display()
    {
        cout << num << "/" << den << endl;
    }

    fraction operator+(fraction f2)
    {
        fraction temp;
        temp.num = (num * f2.den) + (den * f2.num);
        temp.den = den * f2.den;
        return temp;
    }
};
int main()
{
    char choice;
    do
    {
        fraction frac1, frac2, sum;

        frac1.input();
        frac2.input();

        sum = frac1 + frac2;

        cout << "First fraction: ";
        frac1.display();
        cout << endl;

        cout << "Second fraction: ";
        frac2.display();
        cout << endl;
        cout << "Sum: ";
        sum.display();

        cout << "Do you want to continue? (y/n): ";
        cin >> choice;
        cout << "\n";
    } while (choice == 'y' || choice == 'Y');
    return 0;
}