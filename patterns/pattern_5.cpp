// write a c++ code to print the following pattern.

/*

input: n = 5

output:

*   
* *
* * *
* * * *
* * * * *
* * * *
* * * 
* * 
*

*/


#include <iostream>
using namespace std;

int main(){
    int rows,columns,n = 5;

    for(rows = 1; rows <= 5; rows++){
        for(columns = 1;  columns <= rows; columns++){
            cout << "* ";
        }
        cout << endl;
    }

    for(rows = n-1; rows >= 1; rows--){
        for(columns = 1; columns <= rows; columns++){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}