//write a program tot print the sum of two numbers entered by the user using a function.

#include <iostream>
using namespace std;

int sum(int x , int y){
    return x+y;
}

int main(){
    int x,y;
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;
    cout << "Sum of "<<x<<" and "<<y<<" is "<<sum(x,y);
    return 0;
}

