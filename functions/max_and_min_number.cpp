// write a program to print the maximum and minimum number respectively among three nubers entered by user.


#include <iostream>
using namespace std;

int find_maximum(int num1, int num2, int num3){
    int maxnum = num1;
    if (num2 > maxnum){
        maxnum = num2;
    }
    if (num3 > maxnum){
        maxnum = num3;
    }
    return maxnum;
}

int find_minimum(int num1, int num2, int num3){
    int minnum = num1;
    if (num2 < minnum){
        minnum = num2;
    }
    if (num3 < minnum){
        minnum = num3;
    }
    return minnum;
}

int main(){
    int num1,num2,num3;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter third number: ";
    cin >> num3;

    int max = find_maximum(num1,num2,num3);
    int min = find_minimum(num1,num2,num3);
    cout << "Max number: "<<max<<endl;
    cout << "Min number: "<<min<<endl;

    return 0 ;
}