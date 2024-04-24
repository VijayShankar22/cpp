// write a c++ code to print the following pattern.

/*

input: n =5 

output: 
   
    *
   ***
  *****
 *******
*********

*/


#include <iostream>
using namespace std;

int main(){
    int rows,columns,n = 5;

    for(rows = 0; rows < n; rows++){
        for(columns = 0; columns < n - rows -1; columns++){
            cout << " ";
        }

        for(int stars = 0; stars < 2*rows+1; stars++){
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}