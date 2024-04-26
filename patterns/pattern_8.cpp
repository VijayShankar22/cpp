// write a c++ program to print the following pattern.

/*

input: n = 10

output:

         *
        * *
       *   *
      *     *
     *       *
    *         *
   *           *
  *             *
 *               *
*******************

*/


#include <iostream>
using namespace std;

int main(){
    int rows,columns,n = 10;

    for(rows = 1; rows <= n; rows++){
        for(columns = 1; columns <= n-rows; columns++){
            cout << " ";
        }
        cout << "*";

        if(rows > 1 && rows < n){
            for(int k = 1; k <= 2*(rows-1)-1; k++){
                cout << " ";
            }
            cout << "*";
        }
        else if(rows == n){
            for(int m = 1; m <= 2*(n-1); m++){
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}
