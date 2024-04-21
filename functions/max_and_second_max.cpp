#include <iostream>
#include <climits>
using namespace std;

void max_second_max(int array[], int length){
    int max1 = INT_MIN, max2 = INT_MIN;

    for(int i = 0; i < length; ++i){
        if (array[i] > max1){
            max2 = max1;
            max1 = array[i];
        }else if (array[i] > max2 && array[i] != max1){
            max2 = array[i];
        }
    }

    if (max2 == INT_MIN){
        cout << "maximum element :" << max1 << endl;
        cout << "There is no second max.";
    } else  {
        cout << "Maximum element: " << max1 << endl;
        cout << "Second maximum element: " << max2 << endl;
    }
}

int main(){
    int length;
    cout << "Enter length of the array: ";
    cin >> length;
    int array[length];

    for(int i = 0; i < length; ++i){
        cout << "Enter element " << i + 1 << ": ";
        cin >> array[i];
    }

    max_second_max(array,length);
    return 0;
}
