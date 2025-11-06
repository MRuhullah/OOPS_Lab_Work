#include <iostream>
using namespace std;
void swap_ref(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << " Using swap by  reference function, value are:" << endl;
    cout << "a = " << a << " b = " << b << endl;
}
int main()
{
    int a, b;
    cout << "Enter numbers that you wanna swap" << endl;
    cin >> a >> b;
    cout << "Before swap by reference:" << endl;
    cout << "a = " << a << " b = " << b << endl;
    swap_ref(a, b);
    cout << "After swap by reference:" << endl;
    cout << "a = " << a << " b = " << b << endl;

    return 0;
}