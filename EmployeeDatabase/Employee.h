#pragma once
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <iterator>
#include <vector>

class Employee
{
public:
	Employee();
	Employee(int salary, std::string firstName, std::string lastName);
	virtual ~Employee() = default;

	virtual Employee* addEmployee() = 0;
	virtual void saveEmployee(std::ostream& os) const = 0;
	virtual void printDetails() const = 0;
	//void deleteEmployee(std::vector<Employee*>& emp);

	std::string getFirstName() const;
	std::string getSecondName() const;
	int getSalary() const;

	friend std::ostream& operator<<(std::ostream& os, const Employee& emp);

private:
	int mSalary;
	std::string mFirstName;
	std::string mLastName;
};

#endif // !EMPLOYEE_H

