#include <iostream>
using namespace std;

int main() {

    int value;
    cout << "Enter operation to perform:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl << endl;
    cout << "Enter a value from 1, 2, 3, 4: ";
    cin >> value;

    if (value < 1 || value > 4) {
        cout << "Enter a valid value from 1, 2, 3, 4." << endl;
        return 1;
    }

    float num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    if (value == 1) {
        cout << "Sum of " << num1 << " and " << num2 << " is: " << num1 + num2;
    } else if (value == 2) {
        cout << "Difference of " << num1 << " and " << num2 << " is: " << num1 - num2;
    } else if (value == 3) {
        cout << "Product of " << num1 << " and " << num2 << " is: " << num1 * num2;
    } else if (value == 4) {
        if (num2 != 0) {
            cout << "Division of " << num1 << " and " << num2 << " is: " << num1 / num2;
        } else {
            cout << "Cannot divide by zero.";
        }
    }

    return 0;
}
