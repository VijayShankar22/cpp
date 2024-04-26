// write a c++ program to print the following pattern.

/*

input: n = 5

output:

*                 * 
* *             * * 
* * *         * * * 
* * * *     * * * * 
* * * * * * * * * * 
* * * *     * * * * 
* * *         * * * 
* *             * * 
*                 *

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

    for(rows = n-1; rows >= 1; rows--){
        for(columns = 1; columns <= rows; columns++){
            cout << "* ";
        }
        cout << string(4*(n-rows),' ');

        for(columns =1; columns <= rows; columns++){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}