//fibonacci series
// 0 1 1 2 3 5 8 13 ...
#include <iostream>
using namespace std;

int main() {
    int firstnum = 0, secondnum = 1;
    int position;

    cout << "Enter the position till you want fibonacci series: ";
    cin >> position;

    cout << firstnum << endl;  
    cout << secondnum << endl;

    for (int i = 2; i < position; i++) {
        int temp = firstnum + secondnum;
        cout << temp << endl;

        firstnum = secondnum;
        secondnum = temp;
    }

    return 0;
}
