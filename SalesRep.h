#pragma once
#include "Employee.h"
class SalesRep :public Employee
{
private:
	int hoursWorked;
	float hourlyRate;
	float commission;

public:
	/* Constructors */

	SalesRep();
	SalesRep(int, std::string, int, float, float);

	/*Getters and Setters */

	void setHoursWorked(int hw) { hoursWorked = hw; }
	int getHoursWorked() const { return hoursWorked; }
	void setHourlyRate(float hr) { hourlyRate = hr; }
	float getHourlyRate() const { return hourlyRate; }
	void setCommission(float comm) { commission = comm; }
	float getCommission() const { return commission; }

	/* Get pay and print functions */

	double getPay();
	void print();  // This function overrides the print() function of Employee
};

