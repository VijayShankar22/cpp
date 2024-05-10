// Q7.Write a C++ program to check whether a given string begins with "F" or ends with "B". If the string starts with "F" return "Fizz" and return "Buzz" if it finishes with "B". 
// If the string starts with "F" and ends with "B" return "FizzBuzz". In other cases return the original string.



#include <iostream>
#include <string>
using namespace std;

string checkstring(const string& mystring){
    if(mystring.length() == 0){
        return mystring;
    }

    char first_character = mystring[0];
    char last_character = mystring[mystring.length() - 1];

    if(first_character == 'F' && last_character == 'B'){
        return "FIZZBUZZ";
    } else if (first_character == 'F'){
        return "FIZZ";
    } else if (last_character == 'B'){
        return "BUZZ";
    } else  {
        return mystring;
    }
}

int main(){
    string mystring;
    cout << "Enter a string: ";
    cin >> mystring;
    string result = checkstring(mystring);
    cout << result;
    return 0;
}


//using inbuilt function.

#include <iostream>
#include <string>
using namespace std;

string checkstring(const string& mystring){
    if(mystring.empty()){
        return mystring;
    }

    if(mystring.front() == 'F' && mystring.back() == 'B'){
        return "FIZZBUZZ";
    }else if(mystring.front() == 'F'){
        return "FIZZ";
    }else if(mystring.back() == 'B'){
        return "BUZZ";
    }else{
        return mystring;
    }
}

int main(){
    string mystring;
    cout << "Enter a string: ";
    cin >> mystring;
    string result = checkstring(mystring);
    cout << result;

    return 0;
}