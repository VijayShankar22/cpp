#include <iostream>
using namespace std;

void primefactor(int num){
if (num == 0){
    cout << 0;
    return;
}else if (num == 1){
    cout << 1;
    return;
}

    while(num % 2 == 0){
        cout << 2 << " ";
        num = num/2;
    }

    for (int i = 3; i*i <= num; i = i+2){
        while(num%i == 0){
            cout << i << " ";
            num = num/i;
        }
    }

    if (num > 2){
        cout << num << " ";
    }
}


int main(){
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << "prime factor of " << num << " : ";
    primefactor(num);
    return 0;
}