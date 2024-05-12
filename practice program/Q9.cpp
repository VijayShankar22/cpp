// Q9.Write a C++ program to implement a recursive function to find the sum of all prime numbers in a given range.



#include <iostream>
#include <cmath>

bool isPrime(int n, int divisor = 1) {
    if (n <= 1) {
        return false;
    }
    if (n % divisor == 0 && divisor != 1 && divisor != n) {
        return false;
    }
    if (divisor * divisor > n) {
        return true;
    }
    return isPrime(n, divisor + 1);
}

int sumOfPrimesInRange(int start, int end) {
    if (start > end) {
        return 0;
    }
    if (isPrime(start)) {
        return start + sumOfPrimesInRange(start + 1, end);
    }
    return sumOfPrimesInRange(start + 1, end);
}

int main() {
    int start, end;
    std::cout << "Enter the range (start and end): ";
    std::cin >> start >> end;

    if (start < 0 || end < start) {
        std::cout << "Invalid range!\n";
    } else {
        int sum = sumOfPrimesInRange(start, end);
        std::cout << "Sum of prime numbers in the range " << start << " to " << end << " is: " << sum << std::endl;
    }

    return 0;
}
