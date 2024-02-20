#include <iostream>
using namespace std;

int main() {
    int length;
    cout << "Enter the length of the array: ";
    cin >> length;
    int num_array[length];

    for (int i = 0; i < length; ++i) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> num_array[i];
    }

    int count = 0;

    for (int i = 0; i < length / 2; ++i) {
        if (num_array[i] != num_array[length - 1 - i]) {
            break;
        } else {
            count += 1;
        }
    }

    if (count == length / 2) {
        cout << endl << "Given array of integers is PALINDROME." << endl << endl;
    } else {
        cout << endl << "Given array of integers is NOT PALINDROME." << endl << endl;
    }

    for (int i = 0; i < length; ++i) {
        int original_number = num_array[i];
        int reversed_number = 0;
        int a = original_number;

        while (a > 0) {
            int digit = a % 10;
            reversed_number = reversed_number * 10 + digit;
            a /= 10;
        }

        if (original_number == reversed_number) {
            cout << "Number " << num_array[i] << " is a palindrome." << endl;
        } else {
            cout << "Number " << num_array[i] << " is not a palindrome." << endl;
        }
    }

    return 0;
}