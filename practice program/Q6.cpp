// Q6.Create a structure Employee with attributes id, name, and salary, and create an array of employees and print out the data for 5 employees. 
// Data needs to be entered by the user.


#include <iostream>
#include <string>
using namespace std;

struct Employee {
    int id;
    string name;
    double salary;
};

int main() {
    const int num_of_Employees = 5; 

    Employee emp[num_of_Employees];

    for (int i = 0; i < num_of_Employees; ++i) {
        cout << "Enter details for employee " << i + 1 << endl;
        cout << "ID: ";
        cin >> emp[i].id;
        cout << "Name: ";
        cin.ignore();
        getline(cin, emp[i].name);
        cout << "Salary: ";
        cin >> emp[i].salary;
    }

    cout << "\nEmployee Details \n" << endl;
    for (int i = 0; i < num_of_Employees; ++i) {
        cout << "Employee " << i + 1 << "\n";
        cout << "ID: " << emp[i].id << endl;
        cout << "Name: " << emp[i].name << endl;
        cout << "Salary: " << emp[i].salary << endl;
        cout << endl;
    }

    return 0;
}
