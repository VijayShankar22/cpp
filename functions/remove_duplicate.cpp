// write a c++ code to remove duplicate elements from the array.


#include <iostream>
using namespace std;

void remove_duplicate(int array[], int& size){
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size;) {
            if (array[i] == array[j]) {
                for (int k = j; k < size - 1; ++k) {
                    array[k] = array[k + 1];
                }
                --size;
            } else {
                ++j;
            }
        }
    }
}

int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    if (size <= 0) {
        cout << "Invalid array size!";
        return 1;
    }

    int array[size];
    cout << "Enter elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> array[i];
    }

    remove_duplicate(array, size);

    cout << "Array with duplicates removed: ";
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }

    return 0;
}
