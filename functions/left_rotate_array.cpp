// B) circularly left rotate an array.


#include <iostream>
using namespace std;

void leftRotate(int arr[], int d, int n) {
    for (int i = 0; i < d; i++) {
        int temp = arr[0];
        for (int j = 0; j < n - 1; j++) {
            arr[j] = arr[j + 1];
        }
        arr[n - 1] = temp;
    }
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int d;
    cout << "Enter the number of rotations: ";
    cin >> d;

    leftRotate(arr, d, size);

    cout << "Left rotated array is:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
