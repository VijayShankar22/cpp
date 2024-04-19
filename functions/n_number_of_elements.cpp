// Take n number of elements for an array and display the total number of repeated elements, total number of non-negative elements, and zero.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int length;
    cout << "Enter the length of the array: ";
    cin >> length;
    int array[length];
    for (int i = 0; i < length; ++i) {
        cout << "Enter array element: ";
        cin >> array[i];
    }

    int zero = 0;
    int non_negative = 0;
    int repeated = 0; 

    for (int i = 0; i < length; i++) {
        int a = array[i];
        if (a == 0) {
            zero += 1;
        } else if (a > 0) {
            non_negative += 1;
        }

        for (int j = i + 1; j < length; j++) {
            if (array[j] == a) {
                repeated += 1;
                break; 
            }
        }
    }

    cout << "Number of zeros: " << zero << endl;
    cout << "Number of non-negative elements: " << non_negative << endl;
    cout << "Number of repeated elements: " << repeated << endl; 
}
