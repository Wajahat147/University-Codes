#include <iostream>
using namespace std;

bool isEven(int num) {
    return num % 2 == 0;
}

int main() {
    int number;

    cout << "Enter a number to check if it's even: ";
    cin >> number;

    if (isEven(number)) {
        cout<< " Even Number " << endl;
    } else {
        cout<< " Odd Number " << endl;
    }

    return 0;
}
