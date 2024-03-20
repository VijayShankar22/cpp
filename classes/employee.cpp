/* Write a program that would print the information (name, year of joining, salary, address) of three employees by creating a class named 'Employee'. 

The output should be as follows:
Name        Year of joining        Address

Robert         1994            64C- WallsStreat
Sam            2000            68D- WallsStreat
John           1999            26B- WallsStreat */



#include <iostream>
#include <string>
using namespace std;

class employee{
    public:
    string Name;
    int Year_of_joining;
    string Address;

    void print(){
        cout << Name << "\t\t" << Year_of_joining << "\t\t" << Address << "\t\t";
    }
};


int main(){
    employee emp1;
    emp1.Name = "Robert";
    emp1.Year_of_joining = 1994;
    emp1.Address = "64C- WallsStreet";


    employee emp2;
    emp2.Name = "Sam";
    emp2.Year_of_joining = 2000;
    emp2.Address = "68D- WallsStreet";


    employee emp3;
    emp3.Name = "John";
    emp3.Year_of_joining = 1999;
    emp3.Address = "26B- WallsStreet";

    cout << "Name\t\tYear of joining\t\tAddress" << endl;
    emp1.print(); cout << endl;
    emp2.print(); cout << endl;
    emp3.print(); cout << endl;

    return 0;

}
