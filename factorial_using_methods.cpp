#include <iostream>

using namespace std;

int factorial(int num) {
    int fact = 1;

    for (int i = 1; i <= num; ++i) {
        fact *= i;
    }

    return fact;
}

int main() {
    int num;

    cout << "Enter the number for which you want to find the factorial: ";
    cin >> num;

    cout << "\n";

    int result = factorial(num);
    cout << "Factorial of " << num << " is " << result;

    return 0;
}
