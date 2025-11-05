#pragma once
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee
{
public:
	Employee();
	Employee(int salary, std::string firstName, std::string lastName);
	virtual ~Employee() = default;

	virtual void addEmployee() = 0;

protected:
	int mSalary;
	std::string mFirstName;
	std::string mLastName;
};

#endif // !EMPLOYEE_H

