#include <iostream>
using namespace std;
void findminmax(int n, int *arr, int &min, int &max)
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
    int n, min, max;

    cout << "Enter the number of elements" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    findminmax(n, arr, min, max);
    cout << "Minimum element: " << min << endl;
    cout << "Maximum element: " << max << endl;

    return 0;
};