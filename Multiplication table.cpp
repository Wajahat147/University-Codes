#include <iostream>
using namespace std;
int main() {
int number, sum = 0, count = 0;
    cout << "Enter integers (negative to stop):" << endl;

    do {
        cin >> number;
        if (number >= 0) {
            sum += number;
            count++;
        }
    } while (number >= 0);

    if (count > 0) 
        cout << "Total sum: " << sum << "\nAverage: " << static_cast<double>(sum) / count << endl;
    else 
        cout << "No non-negative numbers were entered." << endl;
return 0;
}