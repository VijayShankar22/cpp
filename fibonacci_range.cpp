//fibonacci series
// 0 1 1 2 3 5 8 13 ...
#include <iostream>
using namespace std;

int main() {
    int firstnum = 0, secondnum = 1;
    int range;

    cout << "Enter the number upto which you want fibonacci series: ";
    cin >> range;

    cout << firstnum << endl;  
    cout << secondnum << endl;

    for (int i = 2 ; firstnum + secondnum <= range; i++) {
        int temp = firstnum + secondnum;
        cout << temp << endl;

        firstnum = secondnum;
        secondnum = temp;
        }
return 0;
}
