#include <iostream>
using namespace std;

void findMinMax(int *arr, int n, int &min, int &max)
{
    min = arr[0];
    max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (*(arr + i) < min)
            min = *(arr + i);

        if (*(arr + i) > max)
            max = *(arr + i);
    }
}

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int minimum, maximum;

    findMinMax(arr, n, minimum, maximum);

    cout << "Minimum value: " << minimum << endl;
    cout << "Maximum value: " << maximum << endl;

    return 0;
}
