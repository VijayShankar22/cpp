// 1.Write a C++ program to find the absolute difference between n and 51. If n is greater than 51 return triple the absolute difference.


#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int absolute_difference = abs(n-51);
    if (n > 51){
        cout << "Absolute difference is " << 3*absolute_difference;
    }else{
        cout << "Absolute difference is " << absolute_difference;
    }

    return 0;
}
