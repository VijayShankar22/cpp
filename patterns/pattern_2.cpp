// write a c++ program to print the following pattern.

/*

input: n = 5

output:

1                                               
2 2
3 3 3 
4 4 4 4  
5 5 5 5 5 

*/



#include <iostream>
using namespace std;

int main() {
    int rows , columns , n = 5;

    for (rows = 1; rows <= n; rows++) {
        for (columns = 1; columns <= rows; columns++) {
            cout << rows << " ";
        }
        cout << endl;
    }

    return 0;
}




