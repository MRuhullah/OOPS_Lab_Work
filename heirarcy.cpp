#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area() = 0;
};

class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}
    void area()
    {
        double a = 3.14 * radius * radius;
        cout << "Area of Circle: " << a << endl;
    }
};

class Rectangle : public Shape
{
private:
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}
    void area()
    {
        double a = length * width;
        cout << "Area of Rectangle: " << a << endl;
    }
};

class Triangle : public Shape
{
private:
    double base, height;

public:
    Triangle(double b, double h) : base(b), height(h) {}
    void area()
    {
        double a = 0.5 * base * height;
        cout << "Area of Triangle: " << a << endl;
    }
};

int main()
{
    double radius, length, width, base, height;

    cout << "Enter radius of circle: ";
    cin >> radius;
    Circle c(radius);

    cout << "Enter length and width of rectangle: ";
    cin >> length >> width;
    Rectangle r(length, width);

    cout << "Enter base and height of triangle: ";
    cin >> base >> height;
    Triangle t(base, height);

    c.area();
    r.area();
    t.area();

    return 0;
}
