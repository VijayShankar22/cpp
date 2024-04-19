//write a program to print product of two numbers entered by the user using function.


#include <iostream>
using namespace std;

double product(double x, double y){
    return x*y;
}

int main(){
    double x,y;
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;

    double result = product(x,y);
    cout << "Product of "<<x<<" and "<<y<<" is "<<result;
}