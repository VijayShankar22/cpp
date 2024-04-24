//write a c++ program to calculate the length of a given string.


#include <iostream>
#include <string>
using namespace std;

int main(){
    string mystring;
    cout << "Enter a string: ";
    getline(cin,mystring);

    int length_of_string = 0;
    for(int i = 0; mystring[i] != '\0'; i++){
        length_of_string += 1;
    }
    
    cout << "Length of the string is: " << length_of_string << endl;

    return 0;
}



//using length function

#include <iostream>
#include <string>
using namespace std;

int main(){
    string mystring;
    cout << "Enter a string: ";
    getline(cin,mystring);

    int length_of_string = mystring.length();
    cout << "Length of the string is: " << length_of_string << endl;

    return 0;
}