// write a program to find out whether a given number is even or odd using function.


#include <iostream>
using namespace std;

void odd_even(int x){
    if (x%2 == 0){
        cout << x <<" is even";
    } else {
        cout << x <<" is odd";
    }
}


int main(){
    int num;
    cout << "Enter number: ";
    cin >> num;
    odd_even(num);
    return 0;
}