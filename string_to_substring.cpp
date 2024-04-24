// write a c++ program to convert string to sub strings based on the spaces.


#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string mystring;
    cout << "Enter a string: ";
    getline(cin, mystring);

    istringstream iss(mystring);
    string word;

    while (iss >> word) {
        cout << word << " " << endl;
    }

    return 0;
}
