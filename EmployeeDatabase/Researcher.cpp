#include "Researcher.h"

Researcher::Researcher()
{
	mNameOfUniversity = "default";
	mTopicsOfResearch = "default";
}

Researcher::Researcher(int salary, std::string firstName, std::string lastName, std::string nameOfUniversity, std::string topicsOfResearch)
	:Employee(salary, firstName, lastName),
	mNameOfUniversity(nameOfUniversity), mTopicsOfResearch(topicsOfResearch)
{}

Researcher::~Researcher()
{

}