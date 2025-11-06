#include <iostream>
#include <string>
using namespace std;

void display(int num)
{
    cout << "Integer value: " << num << endl;
}

void display(float num)
{
    cout << "Float value: " << num << endl;
}

void display(string str)
{
    cout << "String value: " << str << endl;
}

int main()
{
    int a = 10;
    float b = 3.14;
    string c = "Salaam Ruhh";

    display(a);
    display(b);
    display(c);

    return 0;
}
