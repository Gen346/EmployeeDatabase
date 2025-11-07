#include <iostream>
#include <vector>
#include "Employee.h"
#include "Engineer.h"
#include "Manager.h"
void addEmployee()
{
	std::cout << "1) Add employee 2) Delete employee 3) Save\n";
	std::cout << "Enter action: ";

	int choise = 0;

	int employeeChoise = 0;

	std::cin >> choise;

	switch (choise)
	{
	case 1:
		std::cout << "What type of employee will be added?\n";
		std::cout << "1) Manager, 2) Engineer, 3) Researcher";
	}
}
int main()
{
	std::vector<Employee*> storage;

	Employee* man1 = new Manager(123, "Pablo", "Roberto", 12, 34);
	
	man1->addEmployee();

	storage.push_back(man1);

	std::cout << "Compilated\n"; 

	bool quit = false;

	int choise = 1;

	while (!quit)
	{
		switch (choise)
		{
		case 1:
			Employee* manager = new Manager();
		}
	}
}