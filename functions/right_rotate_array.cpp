#include <iostream>
using namespace std;

void array_right_rotate(int* my_array, int n, int rotate) {
    rotate = rotate % n;

    for (int i = 0; i < n; i++) {
        if (i < rotate) {
            cout << my_array[n + i - rotate] << " ";
        } else {
            cout << (my_array[i - rotate]) << " ";
        }
    }
    cout << "\n";
}

int main() {
    int length;
    cout << "Enter length of the array: ";
    cin >> length;

    int* array = new int[length];
    for (int i = 0; i < length; ++i) {
        cout << "Enter array element: ";
        cin >> array[i];
    }

    int rotate;
    cout << "Enter number of rotations k: ";
    cin >> rotate;

    array_right_rotate(array, length, rotate);
    
    return 0;
}
