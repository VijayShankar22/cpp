// write a c++ code to handle divide by zero exception.


#include <iostream>
using namespace std;

double division(double numerator, double denominator){
    if (denominator == 0){
        throw invalid_argument("division by zero error");
    }
    return numerator/denominator;
}

int main(){
    double numerator,denominator;
    cout << "Enter numerator: ";
    cin >> numerator;
    cout << "Enter denominator: ";
    cin >> denominator;

    try{
        double result = division(numerator,denominator);
        cout << "Result = "<< result << endl;
    }catch(const invalid_argument& e){
        cerr << "caught exception: " << e.what() << endl;
    }
    return 0;
}