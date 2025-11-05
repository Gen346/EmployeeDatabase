#include "Employee.h"

Employee::Employee()
{
	mSalary = 0;
	mFirstName = "default";
	mLastName = "default";
}

Employee::Employee(int salary, std::string firstName, std::string lastName)
{
	mSalary = salary;
	mFirstName = firstName;
	mLastName = lastName;
}