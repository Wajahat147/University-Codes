#include <iostream>
using namespace std;

int main() {
    int choice;
    float side, length, width, radius;

    cout << "Menu:" << endl;
    cout << "1. Find area and perimeter of a square" << endl;
    cout << "2. Find area and perimeter of a rectangle" << endl;
    cout << "3. Find area and perimeter of a circle" << endl;
    cout << "4. Exit the program" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter the side of the square: ";
        cin >> side;
        float area = side * side;
        float perimeter = 4 * side;
        cout << "Area of square: " << area << endl;
        cout << "Perimeter of square: " << perimeter << endl;
    } 
    else if (choice == 2) {
        cout << "Enter the length of the rectangle: ";
        cin >> length;
        cout << "Enter the width of the rectangle: ";
        cin >> width;
        float area = length * width;
        float perimeter = 2 * (length + width);
        cout << "Area of rectangle: " << area << endl;
        cout << "Perimeter of rectangle: " << perimeter << endl;
    } 
    else if (choice == 3) {
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        float area = 3.14 * radius * radius;
        float perimeter = 2 * 3.14 * radius;
        cout << "Area of circle: " << area << endl;
        cout << "Perimeter of circle: " << perimeter << endl;
    } 
    else if (choice == 4) {
        cout << "Exiting the program." << endl;
    } 
    else {
        cout << "Invalid choice! Please try again." << endl;
    }

    return 0;
}
