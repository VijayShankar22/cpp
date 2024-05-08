// Write a C++ program to check if a given positive number is a multiple of 3 or a multiple of 7.



#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n % 3 == 0 && n % 7 == 0) {
        cout << n << " is a multiple of both 3 and 7." << endl;
    }
    else if (n % 3 == 0) {
        cout << n << " is a multiple of 3." << endl;
    }
    else if (n % 7 == 0) {
        cout << n << " is a multiple of 7." << endl;
    }
    else {
        cout << n << " is neither a multiple of 3 nor 7." << endl;
    }

    return 0;
}
