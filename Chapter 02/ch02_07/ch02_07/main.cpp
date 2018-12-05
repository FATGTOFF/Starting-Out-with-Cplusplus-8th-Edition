/*
7. Ocean Levels
Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, write
a program that displays:
• The number of millimeters higher than the current level that the ocean’s level will be
in 5 years
• The number of millimeters higher than the current level that the ocean’s level will be
in 7 years
• The number of millimeters higher than the current level that the ocean’s level will be
in 10 years
*/
#include <iostream>

int main()
{
    double risingLevel{ 1.5 }, numMilliFiveYrs{ 5 }, numMilliSevenYrs{ 7 },
	   numMilliTenYrs{ 10 }, futureRisingLevel{ 0.0 };
    
    futureRisingLevel = risingLevel * numMilliFiveYrs;
    std::cout << "The number of millimeters higher than the current" << std::endl;
    std::cout << "in 5 years will be " << futureRisingLevel << " millimeters" << std::endl;

    futureRisingLevel = risingLevel * numMilliSevenYrs;
    std::cout << "The number of millimeters higher than the current" << std::endl;
    std::cout << "in 7 years will be " << futureRisingLevel << " millimeters" << std::endl;

    futureRisingLevel = risingLevel * numMilliTenYrs;
    std::cout << "The number of millimeters higher than the current" << std::endl;
    std::cout << "in 10 years will be " << futureRisingLevel << " millimeters" << std::endl;

    return 0;
}