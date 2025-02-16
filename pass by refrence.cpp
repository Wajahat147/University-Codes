#include <iostream>
using namespace std;

void updateValues(int &a, int &b, int &c) {
    a += 10;
    b += 10;
    c += 10;
}

int main() {
    int x = 5, y = 10, z = 15;

    cout << "Initial values:\n";
    cout << "x: " << x << ", y: " << y << ", z: " << z << endl;

    updateValues(x, y, z);

    cout << "Updated values:\n";
    cout << "x: " << x << ", y: " << y << ", z: " << z << endl;

    return 0;
}
