// take n number of integers as  input from user and print the number of 
// 1) positive integers 
// 2) negative integers 
// 3) odd numbers 
// 4) even numbers 
// 5) zeroes
// also print numbers.

#include <iostream>
#include <array>
#include <vector>
using namespace std;

bool odd_even(int a){

    if (a%2==0){
        return true;
    }
    else {
        return false;
    }
    
}

bool positive_negative(int a){
    if (a > 0){
        return true;
    }
    else{
        if(a < 0){
            return false;
        }
        else{
            ;
        }
    }
}



int main(){
    int array_length;
    cout << "enter the length of the array: ";
    cin >> array_length;
    int array_of_num[array_length];
    for(int i = 0; i < array_length; ++i){
        cout << "Enter number " << i+1 << ":";
        cin >> array_of_num[i];
    }
    
    int zero_count = 0;

    int even_count = 0;
    vector<int> even_num = {};

    int odd_count = 0;
    vector<int> odd_num = {};

    int positive_count = 0;
    vector<int> positive_num = {};

    int negative_count = 0;
    vector<int> negative_num = {};


    for(int i = 0; i < array_length ; ++i){
        int a = array_of_num[i];

        if(a == 0){
            zero_count += 1;
        }
        else{
            bool result = odd_even(a);
            if (result == 1){
                even_count += 1;
                even_num.push_back(a);
            }
            else{
                odd_count += 1;
                odd_num.push_back(a);
            }
            bool result2 = positive_negative(a);
            if (result2 == 1){
                positive_count += 1;
                positive_num.push_back(a);
            }
            else{
                negative_count += 1;
                negative_num.push_back(a);
            }
        }
    }

    cout << "total no of zeroes = " << zero_count << endl;

    cout << "total even numbers = " << even_count << " and numbers are "<<"(";
    for(int i = 0; i < even_count; ++i){
        cout << even_num[i] << ",";
    }
    cout << ")" << endl;


    cout << "total odd numbers = " << odd_count << " and numbers are "<<"(";
    for(int i = 0; i < odd_count; ++i){
        cout << odd_num[i] << ",";
    }
    cout << ")" << endl;


    cout << "total positive numbers = " << positive_count << " and numbers are "<< "(";
    for(int i = 0; i < positive_count; ++i){
        cout << positive_num[i] << ",";
    }
    cout << ")" << endl;


    cout << "total negative numbers = " << negative_count << " and numbers are "<<"(";
    for(int i = 0; i < negative_count; ++i){
        cout << negative_num[i] << ",";
    }
    cout << ")" << endl;

return 0;

}