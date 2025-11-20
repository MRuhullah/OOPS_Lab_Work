#include <iostream>
using namespace std;
class Bill
{
private:
    int units, total;
    int rate = 5;

public:
    Bill(int u)
    {
        units = u;
        total = 0;
    }
    Bill(const Bill &copybill)
    {
        units = copybill.units;
        total = copybill.total;
    }
    void calculate()
    {
        total = units * rate;
    }
    void display()
    {
        cout << "Total units consumed: " << units << endl;
        cout << "Total Amount: " << total << endl;
    }
};
int main()
{
    int units, total;
    cout << "Enter the units consumed:" << endl;
    cin >> units;
    Bill orgbill(units);
    orgbill.calculate();

    cout << "Original Bill:" << endl;
    orgbill.display();

    Bill copiedbill = orgbill;

    cout << "Copied Bill:" << endl;
    copiedbill.display();

    return 0;
}