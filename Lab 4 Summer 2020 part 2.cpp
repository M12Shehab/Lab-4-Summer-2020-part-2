// Lab 4 Summer 2020 part 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Class inheritance - polymorphism - abstract classes

#include "Manager.h"
#include "SalesRep.h"

#include <iostream>

int main()
{
    Manager m1(1, "Foo", 60000, 5);
    m1.print();

    SalesRep s1(2, "Lee", 150, 15, 5000);
    s1.print();

    //Employee p(4, "Karl"); // This returns a compile error
    Employee* p;
    p = &s1;
}

