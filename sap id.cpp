#include <iostream>
using namespace std;

int main() {
    int cybr[] = {01, 02, 03, 04, 05};
    int datasc[] = {6, 7, 8, 9, 10};
    int roll;
    bool found = false;

    cout << "Enter your Sap id: ";
    cin >> roll;

    for (int i = 0; i < 5; i++) {
        if (cybr[i] == roll) {
            cout << "Student of CyberSecurity\n";
            found = true;
            break;
        }
        if (datasc[i] == roll) {
            cout << "Student of Data Science\n";
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Sap id  not found\n";
    }

    return 0;
}
