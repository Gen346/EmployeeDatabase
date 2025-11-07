#include "Engineer.h"

Engineer::Engineer()
{
	mTypeOfEngineer = "default";
	mNumOfYearsExperience = 0;
	mKnowCPP = false;
}

Engineer::Engineer(int salary, std::string firstName, std::string lastName, std::string typeOfEngineer, int numOfYearsExperience, bool knowCPP)
	:Employee(salary, firstName, lastName), mTypeOfEngineer(typeOfEngineer),
	mNumOfYearsExperience(numOfYearsExperience), mKnowCPP(knowCPP)
{

}

Engineer::~Engineer()
{

}