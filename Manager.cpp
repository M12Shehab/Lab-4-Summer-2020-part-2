#include<iostream>
#include<string>
using namespace std;

#include "Manager.h"
Manager::Manager() : Employee() {
    salary = 0;
    numSupervisedEmp = 0;
    vacation = 30;
}

Manager::Manager(int id1, string name1, double salary1, int num1):Employee(id1, name1) {
    salary = salary1;
    numSupervisedEmp = num1;
    vacation = 30;
}
// Here we implement the pure virtual method/function.
double Manager::getPay() {
    return salary;
}

void Manager::print() {
    Employee::print();  // calls the print of Employee
    cout << "Salary: " << salary << endl;
    cout << "Number of employees supervised: " << numSupervisedEmp << endl;
}