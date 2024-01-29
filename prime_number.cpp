#include <iostream>
#include <cmath>
using namespace std;

bool checkprime(int);

int main() {
    int var;
    cout << "Enter a positive integer to be checked for prime: ";
    cin >> var;

    if (checkprime(var)) {
        cout << var << " is PRIME";
    } else {
        cout << var << " is not PRIME";
    }

    return 0;
}

bool checkprime(int num) {
    bool isprime = true;

    if (num <= 1) {
        isprime = false;
    } else {
        for (int i = 2; i <= sqrt(num); ++i) {
            if (num % i == 0) {
                isprime = false;
                break;
            }
        }
    }

    return isprime;
}
