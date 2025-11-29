/* Create a class that imitates part of the functionality of the basic data type int. Call the
class Int (note different capitalization). The only data in this class is an int variable.
Include member functions to initialize an Int to 0, to initialize it to an int value, to display it (it looks just like an int), and to add two Int values.
Write a program that exercises this class by creating one uninitialized and two initialized
Int values, adding the two initialized values and placing the response in the uninitialized
value, and then displaying this result.*/

#include <iostream>
using namespace std;
class Int
{
private:
    int value;

public:
    Int() : value(0) {}
    Int(int val)
    {
        value = val;
    }
    void display()
    {
        cout << "Result : " << value << endl;
    }

    Int add(Int num)
    {
        return Int(value + num.value);
    }
};

int main()
{
    Int num1;
    Int num2(2);
    Int num3(4);

    num1 = num2.add(num3);
    num1.display();
    return 0;
}