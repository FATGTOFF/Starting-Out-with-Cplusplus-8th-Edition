/*
11. Distance per Tank of Gas
A car with a 20-gallon gas tank averages 23.5 miles per gallon when driven in town
and 28.9 miles per gallon when driven on the highway. Write a program that calculates
and displays the distance the car can travel on one tank of gas when driven in town
and when driven on the highway.
Hint: The following formula can be used to calculate the distance:
Distance  Number of Gallons X Average Miles per Gallon
*/
#include <iostream>

int main()
{
    double gasTank{ 20.0 }, mpgTown{ 23.5 }, mpgHighway{ 28.9 }, distance{ 0.0 };

    distance = gasTank * mpgTown;
    std::cout << "The distance the car can travel on one tank of gas\n";
    std::cout << "in town is " << distance << " miles" << std::endl;

    distance = gasTank * mpgHighway;
    std::cout << "The distance the car can travel on one tank of gas\n";
    std::cout << "in town is " << distance << " miles" << std::endl;

    return 0;
}