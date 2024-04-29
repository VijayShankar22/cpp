// write a c++ program to swap two numbers without using third variable.


#include <iostream>
using namespace std;

int main(){
    int x,y;
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number:";
    cin >> y;

    x = x+y;
    y = x-y;
    x = x-y;

    cout << "After swap." << endl;
    cout << "First number: "<<x << endl;
    cout << "Second number: "<<y;

    return 0;
}