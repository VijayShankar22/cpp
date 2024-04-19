//Write a program to print the circumference and area of a circle of radius entered by user using function.

 
 #include <iostream>
 using namespace std;

 void circle(int radius){
    cout << "Perimeter of circle is "<<2*3.14*radius<<endl;
    cout << "Area of circle is "<<3.14*radius*radius<<endl;
 }

 int main(){
    int radius;
    cout <<"Enter radius of the circle: ";
    cin >> radius;
    circle(radius);
    return 0;
 }