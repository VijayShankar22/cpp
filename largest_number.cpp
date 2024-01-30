#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three numbers to check for the largest among them:" << endl;
    cin >> a >> b >> c;

    if (a >= b) {
        if (a >= c) {
            cout << "Largest among three numbers is " << a;
        } else {
            cout << "Largest among three numbers is " << c;
        }
    } else {
        if (b >= c) {
            cout << "Largest among three numbers is " << b;
        } else {
            cout << "Largest among three numbers is " << c;
        }
    }

    return 0;
}





// using temporary variable
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers to check for the largest among them: " << endl;
    cin >> a >> b >> c;

    int max = a;

    if (a < b) {
        max = b;
    }
    if (a < c) {
        max = c;
    }

    cout << "Largest among three numbers is " << max;
    return 0;
}
