// write a c++ program to print the following pattern.

/*

input: n = 5

output:

1                                               
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 

*/



#include <iostream>
using namespace std;

int main(){
    int rows,columns, number = 1, n = 5;

    for(rows = 0; rows <= n; rows++){
        for(columns = 0; columns < rows; columns++){
            cout << number << " ";
            number++;
        }
        cout << "\n";
    }
    return 0;
}



