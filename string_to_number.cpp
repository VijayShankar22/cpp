// write a c++ program to convert a given string to integer.


#include <iostream>
#include <string>
using namespace std;

int main(){
    string mystring;
    cout << "Enter a string: ";
    getline(cin,mystring);

    int num = stoi(mystring);
    cout << "Integer value is: " << num << endl;

    return 0;
}