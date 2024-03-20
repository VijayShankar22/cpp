/*print he average of the three numbers enttered by the user by creating a class name average 
having function to calculate and print the average without creating any object for that class.*/



#include <iostream>
using namespace std;

class average{
    public:
    static void calculateaverage(double a , double b, double c){
        double average = (a+b+c)/3;
        cout << "average of given three number is: " << average;
    }
};

int main(){
    double a,b,c;
    cout << "enter first number: ";
    cin >> a;
    cout << "enter second number: ";
    cin >> b;
    cout << "enter third number: ";
    cin >> c;
    
    average :: calculateaverage(a,b,c);
    return 0;
}