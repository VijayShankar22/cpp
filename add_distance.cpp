#include <iostream>
using namespace std;

int main() {
    double a, b;
    int choice;

    cout << "Select an operation to perform." << endl;
    cout << "1. Add distance in inches" << endl;
    cout << "2. Add distance in feet" << endl;
    cout << "Enter the number from above choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter first distance in inches: ";
        cin >> a;
        cout << "Enter second distance in inches: ";
        cin >> b;

        double sumInInches = a + b;
        double sumInFeet = sumInInches / 12.0;
        cout << "Sum in feet: " << sumInFeet << endl;
    } else if (choice == 2) {
        cout << "Enter first distance in feet: ";
        cin >> a;
        cout << "Enter second distance in feet: ";
        cin >> b;

        double sum = a + b;
        cout << "Sum in feet: " << sum << endl;
    } else {
        cout << "Invalid choice. Please choose 1 or 2." << endl;
    }

    return 0;
}
