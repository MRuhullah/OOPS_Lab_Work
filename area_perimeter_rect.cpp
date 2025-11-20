#include <iostream>
using namespace std;
class rectangle
{
private:
    float length, width;

public:
    rectangle(float l, float w)
    {
        length = l;
        width = w;
    }
    rectangle(float l)
    {
        length = l;
        width = l;
    }
    float area()
    {
        return length * width;
    }
    float perimeter()
    {
        return 2 * (length * width);
    }
    void display()
    {
        cout << "Length: " << length << ", Width: " << width << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl;
    }
};
int main()
{
    int length, width;
    cout << "Enter length and width of rectangle" << endl;
    cin >> length >> width;
    rectangle r1(length, width);
    cout << "Rectangle r1: " << endl;
    r1.display();

    rectangle r2(length);
    cout << "Enter length" << endl;
    cin >> length;
    cout << "Square r2:" << endl;
    r2.display();
    return 0;
}