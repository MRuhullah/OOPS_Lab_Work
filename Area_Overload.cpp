#include <iostream>
using namespace std;

const float PI = 3.14;

float area(float radius) {
    return PI * radius * radius;
}

int area(int length, int breadth) {
    return length * breadth;
}

double area(double base, double height) {
    return 0.5 * base * height;
}

int main() {
    float radius, length, breadth, base, height;

    cout << "Enter radius: ";
    cin >> radius;

    cout << "Enter length and breadth: ";
    cin >> length >> breadth;

    cout << "Enter base and height: ";
    cin >> base >> height;

    cout << "Area of circle: " << area(radius) << endl;
    cout << "Area of rectangle: " << area(length, breadth) << endl;
    cout << "Area of triangle: " << area(base, height) << endl;

    return 0;
}