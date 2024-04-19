// Write a program to print the factorial of a number by defining a function named 'Factorial'.


#include <iostream>
using namespace std;

int factorial(int num){
    int fact = 1;

    if (num == 0 || num == 1){
        return fact;
    }

    for (int i = 2; i <= num ; i++ ){
        fact *= i;
    }
    return fact;
}

int main(){
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << "factorial of "<< num << " is " << factorial(num);

    return 0;
}