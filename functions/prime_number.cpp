//write a function to find out if given number is prime or not.


#include <iostream>
#include <cmath>
using namespace std;

bool isprime(int num){
    if (num <= 1){
        return false;
    }

    for(int i = 2; i <= sqrt(num); ++i){
        if (num%i == 0){
            return false;
        }
    }

    return true;
}

int main(){
    int num;
    cout << "Enter number to check for prime: ";
    cin >> num;

    if(isprime(num)){
        cout << num << " is a prime number.";
    }else{
        cout << num << " is not a prime number.";
    }

    return 0;
}