#include<iostream>
using namespace std;

#include "Employee.h"
Employee::Employee() {
    id = 0;
    name = "";
    address = "";
    tel = "";
    email = "";
    vacation = 0;
}

Employee::Employee(int id1, string name1) {
    id = id1;
    name = name1;
}

void Employee::print() {
    cout << "Employee: " << id << " " << name << endl;
}

// NOTE: We don't implement the pure virtual funcion in base class.
//double Employee::getPay()
//{
//    return 0;
//}