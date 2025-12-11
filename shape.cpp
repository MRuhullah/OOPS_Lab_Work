#include <iostream>
using namespace std;
class shape
{
public:
    virtual float area() = 0;
};
class circle : public shape
{
private:
    float radius;

public:
    circle() : radius(0) {}
    circle(float r) : radius(r) {}
    float area()
    {
        return 3.14 * radius * radius;
    }
};

class rectangle : public shape
{
private:
    float length, breadth;

public:
    rectangle() : length(0), breadth(0) {}
    rectangle(float l, float b) : length(l), breadth(b) {}
    float area()
    {
        return length * breadth;
    }
};

class square : public shape
{
private:
    float side;

public:
    square() : side(0) {}
    square(float s) : side(s) {}
    float area()
    {
        return side * side;
    }
};

int main()
{
    shape *ptr;
    int choice;
    cout << "Enter the choice:" << endl;
    cout << "1.Circle" << endl;
    cout << "2.Rectanle" << endl;
    cout << "3.Square" << endl;
    cin >> choice;
    if (choice == 1)
    {
        float r;
        cout << "Enter the radius: ";
        cin >> r;
        circle c(r);
        ptr = &c;
        cout << "Area of the circle: " << ptr->area() << endl;
    }
    else if (choice == 2)
    {
        float l, b;
        cout << "Enter length and breadth: ";
        cin >> l >> b;
        rectangle rec(l, b);
        ptr = &rec;
        cout << "Area of rectangle: " << ptr->area() << endl;
    }
    else if (choice == 3)
    {
        float s;
        cout << "Enter side: ";
        cin >> s;
        square sq(s);
        ptr = &sq;
        cout << "Area of square: " << ptr->area() << endl;
    }

    return 0;
}