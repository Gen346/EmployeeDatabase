#pragma once
#ifndef ENGINEER_H
#define ENGINEER_H

#include "Employee.h"

class Engineer : public Employee
{
public:
	Engineer();
	Engineer(int salary, std::string firstName, std::string lastName, std::string typeOfEngineer, int numOfYearsExperience, bool knowCPP);
	~Engineer() override;

	Employee* addEmployee() override;

	void printDetails() const override;
	void saveEmployee(std::ostream& os) const override;

protected:
	std::string mTypeOfEngineer;
	int mNumOfYearsExperience;
	bool mKnowCPP;
};

#endif
