#include "Engineer.h"

Engineer::Engineer() : mTypeOfEngineer("default"), mNumOfYearsExperience(0), mKnowCPP(false)
{
}

Engineer::Engineer(int salary, std::string firstName, std::string lastName, std::string typeOfEngineer, int numOfYearsExperience, bool knowCPP)
	:Employee(salary, firstName, lastName), mTypeOfEngineer(typeOfEngineer),
	mNumOfYearsExperience(numOfYearsExperience), mKnowCPP(knowCPP)
{

}

Engineer::~Engineer()
{

}

Employee* Engineer::addEmployee()
{
	std::string firstName = "";
	std::string secondName = "";
	std::string typeOfEngineer = "";
	int salary = 0;
	int numOfYearsExperience = 0;
	bool knowCPP = false;
	std::cout << "Enter engineer`s first name: ";
	std::cin >> firstName;

	std::cout << "Enter engineer`s second name: ";
	std::cin >> secondName;

	std::cout << "Enter engineer`s salary: ";
	std::cin >> salary;

	std::cout << "Enter engineer`s years of expirience: ";
	std::cin >> numOfYearsExperience;

	std::cout << "He know C++? (true, false): ";
	std::cin >> knowCPP;

	Employee* engineer = new Engineer(salary, firstName, secondName, typeOfEngineer, numOfYearsExperience, knowCPP);

	std::cout << "Engineer added!\n";

	return engineer;
}

void Engineer::saveEmployee(std::ostream& os) const
{
	os << "---Engineer---" << "\n";

	os << "First name: " << getFirstName() << "\n";
	os << "Second name: " << getSecondName() << "\n";
	os << "Salary: " << getSalary() << "$" << "\n";

	os << "Type of engineer: " << mTypeOfEngineer << "\n";
	os << "Experience: " << mNumOfYearsExperience << "\n";
	os << "Know C++: " << mKnowCPP << "\n";
}

void Engineer::printDetails() const
{
	std::cout << "Type: Engineer" << "\n";

	std::cout << "First name: " << getFirstName() << "\n";
	std::cout << "Second name: " << getSecondName() << "\n";
	std::cout << "Salary: " << getSalary() << "$" << "\n";

	std::cout << "Type of engineer: " << mTypeOfEngineer << "\n";
	std::cout << "Experience: " << mNumOfYearsExperience << "year(s)" << "\n";
	std::cout << "Know C++: " << mKnowCPP << "\n";
}