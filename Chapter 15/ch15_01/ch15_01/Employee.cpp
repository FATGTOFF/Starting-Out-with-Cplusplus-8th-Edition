#include "Employee.h"

Employee::Employee()
{
	empName = "";
	empNumber = 0;
	hireDate = "";
}

Employee::Employee(std::string na, UINT num, std::string dt)
{
	empName = na;
	empNumber = num;
	hireDate = dt;
}

void Employee::setEmpName(std::string n)
{
	empName = n;
}

void Employee::setEmpNumber(UINT n)
{
	empNumber = n;
}

void Employee::setHireDate(std::string d)
{
	hireDate = d;
}

std::string Employee::getEmpName() const
{
	return empName;
}

UINT Employee::getEmpNumber() const
{
	return empNumber;
}

std::string Employee::getHireDate() const
{
	return hireDate;
}
