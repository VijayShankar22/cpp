//Assign the roll no, phone no and address of two students having names sam and smith respectively by creating two objects of class student.




#include <iostream>
using namespace std;

class student{
    public:
    string sname;
    int rollno;
    long long phone_no;
};

int main(){
    student s1;
    s1.sname = "sam";
    s1.rollno = 200;
    s1.phone_no = 7488293254;
    cout << "student 1: " << s1.sname;
    cout << " rollno: " << s1.rollno;
    cout << " phone no: " << s1.phone_no;


    student s2;
    s2.sname = "smith";
    s2.rollno = 300;
    s2.phone_no = 7328937323;
    cout << " student 2: " << s2.sname;
    cout << " rollno: " << s2.rollno;
    cout << " phone no: " << s2.phone_no;

    return 0;
}