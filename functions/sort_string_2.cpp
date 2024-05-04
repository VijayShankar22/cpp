#include <iostream>
#include <string>
using namespace std;

void bubbleSort(string& str) {
    int n = str.length();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (str[j] > str[j + 1]) {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int main() {
    string mystring;
    cout << "Enter a string: ";
    cin >> mystring;

    bubbleSort(mystring);
    
    std::cout << "Sorted string: " << mystring << std::endl;

    return 0;
}
