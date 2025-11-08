#pragma once
#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"

class Manager : public Employee
{
public:
	/*<---Constructors and destructor--->*/
	Manager();
	Manager(int salary, std::string firstName, std::string lastName, int meetingPerWeek, int vacationPerYear);
	~Manager() override;

	/*<---Methods--->*/
	Employee* addEmployee() override;
	void printDetails() const override;
	void saveEmployee(std::ostream& os) const override;

	/*<-- - Getters--->*/
	//int getMeetingPerWeek();
	//int getVacationDaysPerYear();

protected:
	int mMeetingPerWeek = 0;
	int mVacationDaysPerYear = 0;
};

#endif // !MANAGER_H

