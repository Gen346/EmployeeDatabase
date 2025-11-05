#pragma once
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee
{
public:
	virtual ~Employee() = default;

	virtual void addEmployee() = 0;

};

#endif // !EMPLOYEE_H

