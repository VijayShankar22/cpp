//Structures in C++
#include<iostream>
using namespace std;
struct EmployeeData{
	string name;
	int ID, age;
	float salary;
};
EmployeeData GetData();
void DisplayEmployeeData(EmployeeData);
int main(){
	EmployeeData p;
	p = GetData();
	DisplayEmployeeData(p);
	return 0;
}
EmployeeData GetData(){
	EmployeeData e1;
	cout<<"Enter the Employee Name\nID \nAge \nSalary: ";
	getline(cin, e1.name);
	cin>>e1.ID>>e1.age>>e1.salary;
	return e1;
}
void DisplayEmployeeData(EmployeeData e1){
	cout<<"Employee Data:"<<endl<<"Name: "<<e1.name<<"\nAge: "<<e1.age
	<<"\nID: "<<e1.ID<<"\nSalary: "<<e1.salary<<endl;
}
