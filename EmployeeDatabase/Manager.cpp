#include "Manager.h"
Manager::Manager()
{

}
Manager::Manager(int salary, std::string firstName, std::string lastName, int meetingPerWeek, int vacationPerYear)
	: Employee(salary, firstName, lastName),
	mMeetingPerWeek(meetingPerWeek), mVacationDaysPerYear(vacationPerYear)
{
}

Manager::~Manager()
{
}


void Manager::addEmployee()
{
	std::string firstName = "";
	std::string secondName = "";
	int salary = 0;
	int meetingsPerWeak = 0;
	int vacationsInYear = 0;
	std::cout << "Enter employee name: ";
	std::cin >> firstName;

	std::cout << "Enter employee second name: ";
	std::cin >> secondName;

	std::cout << "Enter employee salary: ";
	std::cin >> salary;

	std::cout << "Enter managers meetings per weak: ";
	std::cin >> meetingsPerWeak;

	std::cout << "Enter manager vacation days in year: ";
	std::cin >> vacationsInYear;

	Employee* manager = new Manager(salary, firstName, secondName, meetingsPerWeak, vacationsInYear);

}

Employee* Manager::createEmployee()
{
	std::string firstName = "";
	std::string secondName = "";
	int salary = 0;
	int meetingsPerWeak = 0;
	int vacationsInYear = 0;
	std::cout << "Enter employee name: ";
	std::cin >> firstName;

	std::cout << "Enter employee second name: ";
	std::cin >> secondName;

	std::cout << "Enter employee salary: ";
	std::cin >> salary;

	std::cout << "Enter managers meetings per weak: ";
	std::cin >> meetingsPerWeak;

	std::cout << "Enter manager vacation days in year: ";
	std::cin >> vacationsInYear;

	Employee* manager = new Manager(salary, firstName, secondName, meetingsPerWeak, vacationsInYear);

}


