#include<iostream>
using namespace std;
int main ()
{
    int num;
    cout << "Enter the number: "<< endl;
    cin >> num;
    for(int i = 1; i <= 100; i++)
    {
        cout << num*i << "\t";
    }
}