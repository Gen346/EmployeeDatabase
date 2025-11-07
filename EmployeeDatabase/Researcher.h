#pragma once
#ifndef RESEARCHER_H
#define RESEARCHER_H

#include "Employee.h"

class Researcher : public Employee
{
public:
	Researcher();
	Researcher(int salary, std::string firstName, std::string lastName, std::string nameOfUniversity, std::string topicsOfResearch);
	~Researcher() override;

	void addEmployee() override;

protected:
	std::string mNameOfUniversity;
	std::string mTopicsOfResearch;
};
#endif
