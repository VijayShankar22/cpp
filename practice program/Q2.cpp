// 2.Write a C++ program to create a string where 'if' is added to the front of a given string. If the string already begins with 'if', return the string unchanged. 


#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    if ((str[0] == 'i' || str[0] == 'I') && (str[1] == 'f' || str[1] == 'F')) {
        cout << str;
    } else {
        cout << "if" + str;
    }

    return 0;
}
