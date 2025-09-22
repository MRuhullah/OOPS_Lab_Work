#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the number of temperature readings: ";
    cin >> n;

    int *temperatures = new int[n];

    cout << "Enter " << n << " temperature values (in °F):\n";
    for (int i = 0; i < n; i++)
    {
        cin >> temperatures[i];
    }

    int hot = 0, pleasant = 0, cold = 0;
    int sum = 0;

    cout << "\nTemperature Categories:\n";
    for (int i = 0; i < n; i++)
    {
        int temp = temperatures[i];
        sum += temp;

        if (temp >= 85)
        {
            cout << temp << "°F is a Hot day.\n";
            hot++;
        }
        else if (temp >= 60)
        {
            cout << temp << "°F is a Pleasant day.\n";
            pleasant++;
        }
        else
        {
            cout << temp << "°F is a Cold day.\n";
            cold++;
        }
    }

    double average = static_cast<double>(sum) / n;

    cout << "\nSummary:\n";
    cout << "Hot days: " << hot << endl;
    cout << "Pleasant days: " << pleasant << endl;
    cout << "Cold days: " << cold << endl;
    cout << "Average temperature: " << average << "°F" << endl;

    delete[] temperatures;

    return 0;
}
