#pragma once
#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"

class Manager : public Employee
{
public:
	Manager(int salary, std::string firstName, std::string lastName, int meetingPerWeek, int vacationPerYear);
	~Manager();

	void addEmployee() override;

protected:
	int mMeetingPerWeek = 0;
	int mVacationDaysPerYear = 0;
};

#endif // !MANAGER_H

