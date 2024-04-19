// Print the multiplication table of given number using recursion.


#include <iostream>
using namespace std;

void table(int x, int y = 1, int limit = 10){
    if (y > limit){
        return;
    }

    cout << x << " x " << y << " = "<< x*y << endl;
    table(x, y + 1, limit);
}

int main(){
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << "Multiplication table of " << num << endl;
    table(num);
    return 0;

}