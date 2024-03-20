//Write a program to print the volume of a box by creating a class named 'Volume' with an initialization list to initialize its length, breadth and height.


#include <iostream>
using namespace std;



class volume{
    private:
    double length;
    double breadth;
    double height;

    public:
    volume(double l, double b, double h){
        length = l;
        breadth = b;
        height = h;
    }

    double calculate(){
        return length*breadth*height;
    }

};


int main(){
    double length,breadth,height;
    cout << "enter lenght: ";
    cin >> length;
    cout <<"enter breadth: ";
    cin >> breadth;
    cout << "enter height: ";
    cin >> height;

    volume box(length,breadth,height);
    cout << "volume = " << box.calculate();
    return 0;

}