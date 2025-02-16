#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    while (true) {
        cout << "==========================" << endl;
        cout << "Point of Sale Terminal" <<"|"<< endl;
        cout << "1. New Sale" <<"|"<< endl;
        cout << "2. Exit" <<"|"<< endl;
        cout << "==========================" << endl;

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 2) {
            cout << "Exiting the program. Thank you!" << endl;
            break;
        } else if (choice == 1) {
            vector<vector<double>> items; // To store price and quantity of each item
            double running_total = 0.0;

            while (true) {
                double price, quantity;
                cout << "\nEnter price of the item: ";
                cin >> price;
                cout << "Enter quantity of the item: ";
                cin >> quantity;

                items.push_back({price, quantity});
                running_total += price * quantity;

                cout << "Running Total: " << fixed << setprecision(2) << running_total << endl;

                char more_items;
                cout << "Do you want to add more items? (y/n): ";
                cin >> more_items;

                if (more_items == 'n' || more_items == 'N') {
                    break;
                }
            }

            cout << "\n==========================" << endl;
            cout << "Final Bill" << endl;
            cout << "==========================" << endl;
            cout << "Item\tPrice\tQuantity\tSubtotal" << endl;

            for (size_t i = 0; i < items.size(); i++) {
                double price = items[i][0];
                double quantity = items[i][1];
                double subtotal = price * quantity;
                cout << i + 1 << "\t" << fixed << setprecision(2) << price << "\t" << quantity << "\t\t" << subtotal << endl;
            }

            cout << "==========================" << endl;
            cout << "Total Bill: " << running_total << endl;

            double cash_paid, balance;
            cout << "Enter cash paid: ";
            cin >> cash_paid;

            if (cash_paid >= running_total) {
                balance = cash_paid - running_total;
                cout << "Balance: " << fixed << setprecision(2) << balance << endl;
            } else {
                cout << "Insufficient payment! Please collect more cash." << endl;
            }

            cout << "==========================" << endl;
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
