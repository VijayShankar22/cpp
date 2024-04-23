//device an algorithm to find all the elements in an array that appears more than n/k times where n is the size of the array and k is the number entered by user such that n is greater than k.


#include <iostream>
using namespace std;

void find_element(int array[], int n, int k) {
    int no_of_times = n / k;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
            }
        }
    }

    int count = 1;
    int current_element = array[0];

    for (int i = 1; i < n; i++) {
        if (array[i] == current_element) {
            count++;
        } else {
            if (count > no_of_times) {
                cout << "element appearing more than n/k times: " << current_element << endl;
            }
            current_element = array[i];
            count = 1;
        }
    }

    if (count > no_of_times) {
        cout << "element appearing more than n/k times: " << current_element << endl;
    }

    if (count <= no_of_times) {
        cout << "no element appears more than n/k times." << endl;
    }
}

int main() {
    int k;
    cout << "enter value of k: ";
    cin >> k;

    int n;
    cout << "enter size of the array: ";
    cin >> n;

    if(k == 0){
        cout << "please enter number other than 0." << endl;
        return 1;
    }else if(k > n){
        cout << "please enter number less than n." << endl;
        return 1;
    }else if(k < 0){
        cout << "please enter a positive number." << endl;
        return 1;
    }

    int array[n];
    for (int i = 0; i < n; i++) {
        cout << "enter array element: ";
        cin >> array[i];
    }

    find_element(array, n, k);
    return 0;
}
