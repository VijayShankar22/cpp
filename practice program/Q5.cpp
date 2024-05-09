// Write a well commented code to check whether an entered year is leap or not.


#include <iostream>
using namespace std;

// Function to check if a year is a leap year
bool isleapyear(int year){
    // Leap years are divisible by 4, but not by 100 unless also divisible by 400
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        return true;  // If conditions are met, the year is a leap year
    } else {
        return false;  // Otherwise, it's not a leap year
    }
}

// Main function where the program starts execution
int main(){
    int year;

    // Prompt user to enter the year
    cout << "Enter a year: ";
    cin >> year;

    // Call the isLeapYear function and print the result
    if (isleapyear(year)){
        cout << year << " is a leap year."<< endl;
    } else {
        cout << year << " is not a leap year."<< endl;
    }

    return 0;
}
