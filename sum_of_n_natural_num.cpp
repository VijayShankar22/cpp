//Write a Program to Find the Sum of the First N Natural Numbers.

#include <iostream>
using namespace std;

int calculatesum(int num){
    int sum = 0;
    for (int i = 1; i <= num; i++){
        sum = sum + i;
    }
    return sum;
}

int main(){
    int num;
    cout <<"enter a number: ";
    cin >> num;
    cout << "sum of first " << num << " natural number is " << calculatesum(num);
    return 0;
}

