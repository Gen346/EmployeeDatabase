#include "Employee.h"
#include "Engineer.h"
#include "Manager.h"
#include "Researcher.h"
#include <fstream>
#include <iostream>
#include <vector>

void saveStorage(const std::vector<Employee*> emp)
{
	std::ofstream outFile("employeeData.txt");

	if (outFile)
	{
		for (const Employee* e : emp)
		{
			e->saveEmployee(outFile);
		}
		outFile.close();
		std::cout << "Saved! Total employees: " << emp.size() << "\n";

		return;
	}
	std::cout << "Error: Unable to open file for saving!\n";
}

void showEmployees(const std::vector<Employee*> emp)
{
	if (emp.size() == 0)
	{
		std::cout << "Database is empty.\n";
		return;
	}
	else
	{
		for (const Employee* e : emp)
		{
			e->printDetails();
		}
	}
}

void deleteEmployee(std::vector<Employee*>& emp)
{
	std::string lastNameToDelete = "";
	std::cout << "Enter employee last name to delete: ";
	std::cin >> lastNameToDelete;

	bool employeeFound = false;

	std::vector<Employee*>::iterator it;

	for (it = emp.begin(); it != emp.end();)
	{
		if ((*it)->getSecondName() == lastNameToDelete)
		{
			delete* it;

			it = emp.erase(it);

			employeeFound = true;

			std::cout << "Employee " << lastNameToDelete << " deleted successfully.\n";

			return;
		}
		else
		{
			++it;
		}
	}
	if (!employeeFound)
	{
		std::cout << "Employee with last name " << lastNameToDelete << " not found.\n";;
	}
}

int main()
{
	static std::vector<Employee*> storage;

	Employee* manager = new Manager();
	Employee* engineer = new Engineer();
	Employee* researcher = new Researcher();

	std::cout << "Compilated\n";

	bool quit = false;

	int choice = 0;

	int employeeType = 0;

	while (!quit)
	{
		std::cout << "1) Add employee 2) Delete employee 3) Show all employee 4) Save database 5) Quit\n";
		std::cout << "Your choise: ";

		if (!(std::cin >> choice))
		{
			std::cout << "Invalid input. Clearing and trying again.\n";
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}

		switch (choice)
		{
		case 1:

			std::cout << "Enter employee type (1. Manager, 2. Engineer, 3. Researcher): ";
			if (!(std::cin >> employeeType))
			{
				std::cout << "Invalid input. Clearing and trying again.\n";
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				continue;
			}

			switch (employeeType)
			{
			case 1:
				storage.push_back(manager->addEmployee());
				break;
			case 2:
				storage.push_back(engineer->addEmployee());
				break;
			case 3:
				storage.push_back(researcher->addEmployee());
				break;
			default:
				std::cout << "Incorrect value. Try again\n";
				break;
			}
			break;
		case 2:
			deleteEmployee(storage);
			break;
		case 3:
			showEmployees(storage);
			break;
		case 4:
			saveStorage(storage);
			break;
		case 5:
			quit = true;
			break;
		default:
			std::cout << "Invalid input. Try again\n";
			break;
		}
	}
	delete manager;
	delete engineer;
	delete researcher;

	for (Employee* e : storage)
	{
		delete e;
	}
	storage.clear();

	std::cout << "Bye!\n";

	return 0;
}