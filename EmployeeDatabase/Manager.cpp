#include "Manager.h"

Manager::Manager(int salary, std::string firstName, std::string lastName, int meetingPerWeek, int vacationPerYear)
	: Employee(salary, firstName, lastName), mMeetingPerWeek(meetingPerWeek), mVacationDaysPerYear(vacationPerYear)
{
}

Manager::~Manager()
{
}


void Manager::addEmployee()
{
}


