#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

typedef unsigned int UINT;

class Employee
{
	private:
		std::string empName;
		UINT empNumber;
		std::string hireDate;

	public:
		Employee();
		Employee(std::string, UINT, std::string);

		void setEmpName(std::string);
		void setEmpNumber(UINT);
		void setHireDate(std::string);

		std::string getEmpName() const;
		UINT getEmpNumber() const;
		std::string getHireDate() const;

};
#endif
