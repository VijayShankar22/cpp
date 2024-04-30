// write a c++ program to calculate the minimum no of tiles required to cover a floor area when the length and breadth is provided by user.


#include <iostream>
using namespace std;

int minTiles(int length, int breadth, int count = 0) {
    if (length > breadth) {
        count += 1;
        return minTiles(length - breadth, breadth, count);
    } else if (length < breadth) {
        count += 1;
        return minTiles(breadth - length, length, count);
    } else if (length == breadth) {
        return count + 1;
    }
}

int main() {
    int length, breadth;
    cout << "Enter length and breadth of the floor: ";
    cin >> length >> breadth;

    int result = minTiles(length, breadth);
    cout << "Minimum number of tiles required: " << result << endl;

    return 0;
}
