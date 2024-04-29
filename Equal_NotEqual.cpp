// write a c++ program to check weather two given numbers are equal or not without using arithmetic or comparison operator.


#include <iostream>
using namespace std;

int main(){
    int num1,num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    if(num1 ^ num2){
        cout << "Both the numbers are Not Equal.";
    }else{
        cout << "Both the numbers are equal.";
    }

    return 0;
}