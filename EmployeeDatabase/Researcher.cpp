#include "Researcher.h"

Researcher::Researcher()
{
}

Researcher::Researcher(int salary, std::string firstName, std::string lastName, std::string nameOfUniversity, std::string topicsOfResearch)
	:Employee(salary, firstName, lastName),
	mNameOfUniversity(nameOfUniversity), mTopicsOfResearch(topicsOfResearch)
{
}

Researcher::~Researcher()
{
}

Employee* Researcher::addEmployee()
{
	std::string firstName = "";
	std::string secondName = "";
	std::string homeUniversity = "";
	std::string topicsOfStudy = "";
	int salary = 0;

	std::cout << "Enter researcher`s first name: ";
	std::cin >> firstName;

	std::cout << "Enter researcher`s second name: ";
	std::cin >> secondName;

	std::cout << "Enter researcher`s salary: ";
	std::cin >> salary;

	std::cout << "Enter researcher`s name of university: ";
	std::cin >> homeUniversity;

	std::cout << "Enter researcher`s topics of study: ";
	std::cin >> topicsOfStudy;

	Employee* researcher = new Researcher(salary, firstName, secondName, homeUniversity, topicsOfStudy);

	std::cout << "Researcher added!\n";

	return researcher;
}

void Researcher::saveEmployee(std::ostream& os) const
{
	os << "---Researcher---" << "\n";

	os << "First name: " << getFirstName() << "\n";
	os << "Second name: " << getSecondName() << "\n";
	os << "Salary: " << getSalary() << "$" << "\n";

	os << "Name of home university: " << mNameOfUniversity << "\n";
	os << "Research topic: " << mTopicsOfResearch << "\n";
}

void Researcher::printDetails() const
{
	std::cout << "Type: Researcher" << "\n";

	std::cout << "First name: " << getFirstName() << "\n";
	std::cout << "Second name: " << getSecondName() << "\n";
	std::cout << "Salary: " << getSalary() << "$" << "\n";

	std::cout << "Name of home university: " << mNameOfUniversity << "\n";
	std::cout << "Research topic: " << mTopicsOfResearch << "\n";
}