#pragma once
#include<string>
#include "Employee.h"

// Derived Class: Class Manager
class Manager :public Employee
{
private:
    double salary;
    int numSupervisedEmp;

public:
    /* Construcors */

    Manager();
    Manager(int, std::string, double, int);

    /* Getters and Setters */

    void setSalary(double salary1) { salary = salary1; }
    double getSalary() const { return salary; }
    void setNumSupervisedEmp(int num) { numSupervisedEmp = num; }
    double getNumSupervisedEmp() const { return numSupervisedEmp; }

    /* Get pay and print functions */
    double getPay();
    void print();  // This function overrides the print() function of Employee
};

