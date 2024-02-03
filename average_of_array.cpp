#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;
    

    if (n <= 0) {
        cerr << "please enter valid size of array" << endl;
        return 1;
    }

    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }

    double average = static_cast<double>(sum) / n;


    cout << "Average of numbers in array is: " << average << endl;

    return 0;
}
