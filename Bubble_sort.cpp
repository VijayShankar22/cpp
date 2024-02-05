#include <iostream>
using namespace std;

int main() {
    int SIZE;
    cout << "Enter the size of the array (positive integers only): ";
    cin >> SIZE;
    int arr[SIZE];
    cout << "\nEnter " << SIZE << " elements for an unsorted array: ";
    for (int i = 0; i < SIZE; i++)
        cin >> arr[i];


    for (int i = 0; i < SIZE; i++) {
        for (int j = i + 1; j < SIZE; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "\nSorted Array: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
