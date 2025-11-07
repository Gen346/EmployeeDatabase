#pragma once
#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"

class Manager : public Employee
{
public:
	Manager();
	Manager(int salary, std::string firstName, std::string lastName, int meetingPerWeek, int vacationPerYear);
	~Manager() override;

	void addEmployee() override;

	static Employee* createEmployee();


protected:
	int mMeetingPerWeek = 0;
	int mVacationDaysPerYear = 0;
};

#endif // !MANAGER_H

