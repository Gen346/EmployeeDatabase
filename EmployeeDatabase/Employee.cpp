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
std::string Employee::getFirstName() const
{
	return mFirstName;
}

std::string Employee::getSecondName() const
{
	return mLastName;
}

int Employee::getSalary() const
{
	return mSalary;
}


std::ostream& operator<<(std::ostream& os, const Employee& emp)
{
	os << "Name: " << emp.getFirstName() << " " << emp.getSecondName()
		<< ", Salary: " << emp.getSalary() << "\n";
	return os;
}
