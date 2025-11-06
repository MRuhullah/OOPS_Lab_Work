#include<iostream>
using namespace std;
void swapvalue(int a , int b)
{
    int temp =  a;
    a = b;
    b = temp;
    cout << " Using swap by value function, value are:" << endl;
    cout << "a = " << a << " b = " << b << endl;
}
int main()
{
    int a,b;
    cout << "Enter numbers that you wanna swap" <<endl;
    cin >> a >> b;
    cout << "Before swap by value:" << endl;
    cout << "a = " << a << " b = " << b <<endl;
    swapvalue(a,b);
    cout <<  "After swap by value:" << endl;
    cout << "a = " << a << " b = " << b <<endl;

    
    return 0;
}
