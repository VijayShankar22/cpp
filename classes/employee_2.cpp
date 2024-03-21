// Write a program by creating an 'Employee' class having the following functions and print the final salary.
// 1 - 'getInfo()' which takes the salary, number of hours of work per day of employee as parameters
// 2 - 'AddSal()' which adds $10 to the salary of the employee if it is less than $500.
// 3 - 'AddWork()' which adds $5 to the salary of the employee if the number of hours of work per day is more than 6 hours.



#include <iostream>
#include <string>
using namespace std;

class employee{
    private:
    double salary;
    double no_of_hours_of_work;

    public:
    void getinfo(double sal,double work_done){
        salary = sal;
        no_of_hours_of_work = work_done;
    }

    void addsal(){
        if (salary < 500){
            salary += 10;
        }
    }
    void addwork(){
        if(no_of_hours_of_work > 6){
            salary += 5;
        }
    }

    double totalsalary(){
        return salary;
    }
};

int main(){
    employee emp1;
    emp1.getinfo(300,7);
    emp1.addsal();
    emp1.addwork();
    cout << "emp1 total salary " << emp1.totalsalary() << endl;


    employee emp2;
    emp2.getinfo(550,6.5);
    emp2.addsal();
    emp2.addwork();
    cout << "emp2 total salary " << emp2.totalsalary() << endl;

    return 0;
}