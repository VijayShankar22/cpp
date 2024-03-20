/* Write a program to print the area and perimeter of a triangle 
when sides of the triangle are given by the user by creating a class named 'Triangle' with a function to print the area and perimeter.*/



#include <iostream>
#include <cmath>
using namespace std;

class Triangle {
public:
    void area_and_perimeter(double side1, double side2, double side3) {
        if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
            cout << "Perimeter = " << (side1 + side2 + side3) << endl;
            double s = (side1 + side2 + side3) / 2;
            double area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
            cout << "Area = " << area << endl;
        } else {
            cout << "Triangle cannot be formed. Sum of two sides must be greater than the third side." << endl;
        }
    }
};

int main() {
    double side1, side2, side3;
    cout << "Enter side 1: ";
    cin >> side1;
    cout << "Enter side 2: ";
    cin >> side2;
    cout << "Enter side 3: ";
    cin >> side3;

    Triangle triangle;
    triangle.area_and_perimeter(side1, side2, side3);

    return 0;
}
