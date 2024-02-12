#include <iostream>
using namespace std;

bool arraysearch (int arr[],int arraysize,int search, int& position){
    for (int i = 0; i < arraysize; ++i){
        if(arr[i] == search){
            position = i;
            return true;
            }
    }
    return false;
}

int main(){
    int size = 7;
    int search;
    int position = -1;
    int givenarray[] = {2,4,6,7,8,5,9};
    cout << "Enter the number to search in array:";
    cin >> search;

    if (arraysearch(givenarray, size, search, position)){
        cout << search << " is in array at position " << position << endl;
    }else{
        cout << search << " is not in array" << endl;
    }

    return 0;

}