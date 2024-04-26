//  write a c++ program to print the following code.

/*

input: n = 5

output:

*                 * 
* *             * * 
* * *         * * * 
* * * *     * * * * 
* * * * * * * * * *

*/


#include <iostream>
#include <string>
using namespace std;

int main(){
    int rows,columns,n = 5;

    for(rows = 1; rows <= n; rows++){
        for(columns = 1; columns <= rows; columns++){
            cout << "* ";
        }

        cout << string(4*(n-rows), ' ');

        for(columns = 1; columns <= rows; columns++){
            cout << "* ";
        }

        cout << endl;
    }
}