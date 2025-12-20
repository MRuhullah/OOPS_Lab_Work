#include <iostream>
using namespace std;
class Item
{
private:
    int *price, *quantity;
    int total;

public:
    Item(int p, int q)
    {
        price = new int;
        quantity = new int;
        *price = p;
        *quantity = q;
        total = 0;
    }
    void calculate()
    {
        total = (*price) * (*quantity);
    }
    void display()
    {
        cout << "Total price after purchasing the item is: " << total << endl;
    }

    ~Item()
    {
        delete price;
        delete quantity;
        cout << "Memory freed" << endl;
    }
};

int main()
{
    int price, quantity;

    cout << "Enter price: ";
    cin >> price;

    cout << "Enter quantity: ";
    cin >> quantity;

    Item it(price, quantity);
    it.calculate();
    it.display();

    return 0;
}