#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H
#include "Employee.h"
#include <string>

typedef unsigned int UINT;

class ProductionWorker : public Employee
{
	private:
		int shift;
		double hrlyPayRate;

	public:
		ProductionWorker();
		ProductionWorker(int, double, std::string, UINT, std::string);

		void setShift(int);
		void setHrlyPayRate(double);
		
		int getShift() const;
		double getHrlyPayRate() const;

};
#endif