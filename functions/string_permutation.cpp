// write a c++ program to calculate the permutation of a given string.

/*

Input: str = "ABC"

Output:
"ABC",
"ACB",
"BAC",
"BCA",
"CBA",
"CAB"

*/



#include <iostream>
#include <string>
using namespace std;

void swap(char& a, char& b) {
    char temp = a;
    a = b;
    b = temp;
}

void generatePermutations(string str, int left, int right) {
    if (left == right) {
        cout << str << ", ";
        return;
    }

    for (int i = left; i <= right; ++i) {
        swap(str[left], str[i]);
        generatePermutations(str, left + 1, right);
        swap(str[left], str[i]);
    }
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    cout << "Permutations of " << input << " are: ";
    generatePermutations(input, 0, input.length() - 1);

    return 0;
}
