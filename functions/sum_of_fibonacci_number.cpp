// write a c++ program to print sum of fibonacci numbers upto n where n is the number entered by user using function.



#include <iostream>
using namespace std;

int sum_of_fibonacci_series(int n) {
    int n1 = 0;
    int n2 = 1;
    int sum = 1;

    if(n == 0 || n == 1) {
        return n;
    } else {
        for(int i = 2; i <= n; i++) {
            int temp = n1 + n2;
            n1 = n2;
            n2 = temp;
            sum += n2;
        }
        return sum;
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Sum of Fibonacci numbers upto " << num << " is " << sum_of_fibonacci_series(num);

    return 0;
}
