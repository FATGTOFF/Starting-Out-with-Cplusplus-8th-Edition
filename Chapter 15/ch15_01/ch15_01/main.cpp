#include <iostream>
#include <string>
#include "ProductionWorker.h"


int main()
{
	ProductionWorker worker1;

	worker1.setEmpName("Carlos");
	worker1.setEmpNumber(123);
	worker1.setHireDate("23 March 2017");
	worker1.setShift(1);
	worker1.setHrlyPayRate(22.50);

	std::cout << worker1.getEmpName() << "\t"
	<< worker1.getEmpNumber() << "\t" << worker1.getHireDate()
	<< "\t" << worker1.getShift() << "\t" << worker1.getHrlyPayRate() << std::endl;

	ProductionWorker worker2(2, 23.75, "Jose", 456, "21 May 2016");

	std::cout << worker2.getEmpName() << "\t"
		<< worker2.getEmpNumber() << "\t" << worker2.getHireDate()
		<< "\t" << worker2.getShift() << "\t" << worker2.getHrlyPayRate() << std::endl;

	return 0;
}