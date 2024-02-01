#include <iostream>
using namespace std;

int main(){
    int number;
    int reversed_number = 0;
    cout << "enter a number:";
    cin >> number;

    int original_number = number;

    while (number > 0){
        int digit = number % 10;
        reversed_number = reversed_number * 10 + digit;
        number /= 10;
    }

    if (original_number == reversed_number){
        cout << original_number << " is a palindrome number";
    } else {
        cout << original_number << " is not a palindrome number";
    }

    return 0;
}