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


Employee* Manager::addEmployee()
{
	std::string firstName = "";
	std::string secondName = "";
	int salary = 0;
	int meetingsPerWeak = 0;
	int vacationsInYear = 0;
	std::cout << "Enter manager`s first name: ";
	std::cin >> firstName;

	std::cout << "Enter manager`s second name: ";
	std::cin >> secondName;

	std::cout << "Enter manager`s salary: ";
	std::cin >> salary;

	std::cout << "Enter manager`s meetings per weak: ";
	std::cin >> meetingsPerWeak;

	std::cout << "Enter manager`s vacation days in year: ";
	std::cin >> vacationsInYear;

	Employee* manager = new Manager(salary, firstName, secondName, meetingsPerWeak, vacationsInYear);

	std::cout << "Manager added!\n";

	return manager;
}

void Manager::saveEmployee(std::ostream& os) const
{
	os << "---Manager---" << "\n";

	os << "First name: " << getFirstName() << "\n";
	os << "Second name: " << getSecondName() << "\n";
	os << "Salary: " << getSalary() << "\n";

	os << "Meetings per week: " << mMeetingPerWeek << "\n";
	os << "Vacation days per year: " << mVacationDaysPerYear << "\n";
}

void Manager::printDetails() const
{
	std::cout << "Type: manager" << "\n";

	std::cout << "First name: " << getFirstName() << "\n";
	std::cout << "Second name: " << getSecondName() << "\n";
	std::cout << "Salary: " << getSalary() << "$" << "\n";

	std::cout << "Meetings per week: " << mMeetingPerWeek << "\n";
	std::cout << "Vacation days per year: " << mVacationDaysPerYear << "\n";
}


