/*. Write a template function that returns the average of all the elements of an array. The
arguments to the function should be the array name and the size of the array (type int).
In main(), exercise the function with arrays of type int, long, double, and char*/

#include <iostream>
using namespace std;

template <typename T>
double average(T array[], int n)
{
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += array[i];
    }
    return sum / n;
}

int main()
{
    int intArray[] = {10, 20, 30, 40};
    long longArray[] = {100L, 200L, 300L};
    double doubleArray[] = {2.5, 3.5, 4.0};
    char charArray[] = {'A', 'B', 'C'};

    cout << "Average of int array: "
         << average(intArray, 4) << endl;

    cout << "Average of long array: "
         << average(longArray, 3) << endl;

    cout << "Average of double array: "
         << average(doubleArray, 3) << endl;

    cout << "Average of char array (ASCII): "
         << average(charArray, 3) << endl;

    return 0;
}
