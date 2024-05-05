// create a function to print the first letter of each word of a string.



#include <iostream>
using namespace std;

void first_letter(string mystring) {
    bool new_word = true;
    for (char c : mystring) {

        if (c != ' ' && new_word) {
            cout << c << " ";
            new_word = false;
        }

        else if (c == ' ') {
            new_word = true;
        }
    }
    cout << endl;
}

int main() {
    string mystring;

    cout << "Enter a string: ";
    getline(cin, mystring);

    first_letter(mystring);

    return 0;
}
