// write a c++ program to print the following pattern.

/*

input: n = 5

output:

1                                               
1 2
1 2 3
1 2 3 4   
1 2 3 4 5 

*/


#include <iostream>
using namespace std;

int main(){
    int rows, columns, n = 5;

    for(rows = 1; rows <= n; rows++){
        for(columns = 1; columns <= rows; columns++){
            cout << columns << " ";
        }
        cout << endl;
    }

    return 0;
}