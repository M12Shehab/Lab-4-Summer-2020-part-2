#include <iostream>
using namespace std;

#include "SalesRep.h"
SalesRep::SalesRep() : Employee() {
    hoursWorked = 0;
    hourlyRate = 0.0;
    commission = 0.0;
    vacation = 20;
}

SalesRep::SalesRep(int id1, string name1, int hw, float hr, float comm) : Employee(id1, name1) {
    hoursWorked = hw;
    hourlyRate = hr;
    commission = comm;
    vacation = 20;
}

// Here we implement the pure virtual method/function.
double SalesRep::getPay() {
    return hoursWorked * hourlyRate + commission;
}

void SalesRep::print() {
    Employee::print();  // calls the print of Employee
    cout << "Hours Worked: " << hoursWorked << endl;
    cout << "Hourly Rate: " << hourlyRate << endl;
    cout << "Commission: " << commission << endl;
    cout << "Salary: " << getPay() << endl;
}