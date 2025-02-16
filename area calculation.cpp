#include <iostream>
#include <cmath>
using namespace std;

double areaOfCircle(double radius) {
    return M_PI * radius * radius;
}

double areaOfRectangle(double length, double breadth) {
    return length * breadth;
}

double areaOfTriangle(double base, double height) {
    return 0.5 * base * height;
}

int main() {
    double radius, length, breadth, base, height;

    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Area of Circle: " << areaOfCircle(radius) << endl;
    cout << "Enter length and breadth of the rectangle: ";
    cin >> length >> breadth;
    cout << "Area of Rectangle: " << areaOfRectangle(length, breadth) << endl;

    cout << "Enter base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of Triangle: " << areaOfTriangle(base, height) << endl;

    return 0;
}
