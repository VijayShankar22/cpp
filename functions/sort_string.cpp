// write a c++ code to sort the given string.


#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string sort_string(string mystring) {
    sort(mystring.begin(), mystring.end());
    return mystring;
}

int main() {
    string input, result;
    cout << "Enter the string: ";
    cin >> input;
    result = sort_string(input);
    cout << "Original string: " << input << endl;
    cout << "Sorted string: " << result << endl;
    return 0;
}
