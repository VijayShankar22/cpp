#include <iostream>
using namespace std;

int main(){
    int num , reversednum = 0 , reminder;
    cout << "Enter a number to reverse : ";
    cin >> num;
    while(num!=0){
        reminder = num%10;
        reversednum = (reversednum * 10) + reminder;
        num /= 10;
    }
    cout << "Reversed number is : " << reversednum;
    return 0;
}