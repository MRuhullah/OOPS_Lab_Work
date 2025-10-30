#include <iostream>
using namespace std;
int main()
{
    float temp, far, cel;
    int choice;
    cout << "Enter the number you wanna convert" << endl;
    cin >> temp;
    cout << "Enter choice: " << endl;
    cout << "1. To Celsius" << endl
         << "2. To Farhenheit" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        cel = (temp - 32) * 5.0 / 9.0;
        cout << "Temperature in Celsius is: " << cel << endl;
        break;

        case 2:
        far = (temp * 9.0 / 5.0) + 32; 
        cout << "Temperature in  Farhenheit is: " << far << endl;
        break;

        default :
         cout <<"Invalid choice" << endl;
    }
}
