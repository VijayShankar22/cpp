/* Write a program which will ask the user to enter his/her marks (out of 100). Define a function that will display grades according to the marks entered as below:
Marks        Grade
91-100         AA
81-90          AB
71-80          BB
61-70          BC
51-60          CD
41-50          DD
<=40          Fail  */

#include <iostream>
using namespace std;


void grade(int marks){
    if(marks >= 91 && marks <= 100){
        cout << "grade AA";
    }else if (marks >= 81 && marks <= 90){
        cout << "grade AB";
    }else if (marks >= 71 && marks <= 80){
        cout << "grade BB";
    }else if (marks >= 61 && marks <= 70){
        cout << "grade BC";
    }else if (marks >=51 && marks <= 60){
        cout << "grade CD";
    }else if (marks >= 41 && marks <= 50){
        cout << "grade DD";
    }else{
        cout << "FAIL";
    }
}

int main(){
    int marks;
    cout << "Enter marks: ";
    cin >> marks;
    grade(marks);

    return 0;
}