// write a c++ program to reverse a string.


#include <iostream>
#include <string>
using namespace std;

void reversestring(string& mystring){
    int start = 0;
    int end = mystring.length() -1;

    while (start < end){
        char temp = mystring[start];
        mystring[start] = mystring[end];
        mystring[end] = temp;

        start++;
        end--;
    }
}

int main(){
    string mystring;
    cout << "Enter string: ";
    getline(cin,mystring);

    reversestring(mystring);
    cout << "Reversed string: " << mystring;

    return 0;
}