#include "ProductionWorker.h"

ProductionWorker::ProductionWorker() : Employee()
{
	shift = 1;
	hrlyPayRate = 0.0;
}

ProductionWorker::ProductionWorker(int sh, double hr, 
	std::string na, UINT nu, std::string da) : Employee(na,nu,da)
{
	shift = sh;
	hrlyPayRate = hr;
}

void ProductionWorker::setShift(int s)
{
	shift = s;
}

void ProductionWorker::setHrlyPayRate(double h)
{
	hrlyPayRate = h;
}

int ProductionWorker::getShift() const
{
	return shift;
}

double ProductionWorker::getHrlyPayRate() const
{
	return hrlyPayRate;
}
