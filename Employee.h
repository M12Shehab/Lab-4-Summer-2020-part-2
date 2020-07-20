#pragma once
#include<string>

class Employee
{
protected:
    int id;
    std::string name;
    std::string address;
    std::string tel;
    std::string email;
    int vacation;

public:
    /* Constructors */

    Employee();
    Employee(int, std::string);

    /* Getters and Setters */
    /* Note: The implementation of these functons is given here to */
    /* save space. It is better to provided the implementation outside */
    /* the class definition */

    int getID() const { return id; }
    std::string getName() const { return name; }
    void setName(std::string name1) { name = name1; }
    std::string getAddress() const { return address; }
    void setAddress(std::string address1) { address = address1; }
    std::string getEmail() const { return email; }
    void setEmail(std::string email1) { email = email1; }
    int getVacation() const { return vacation; }
    void setVacation(int vacation1) { vacation = vacation1; }

    /* Print function */
    virtual void print();

    /* Pure virtual function */
    virtual double getPay() = 0; // This makes the class abstract - we can't create objects from it
};

