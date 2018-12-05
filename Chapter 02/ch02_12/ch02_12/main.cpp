/*
12. Land Calculation
One acre of land is equivalent to 43,560 square feet. Write a program that calculates
the number of acres in a tract of land with 391,876 square feet.
*/
#include <iostream>

int main()
{
    double oneAcreToSqFt{ 43560 }, tractOfLand{ 391876 }, numOfAcres{ 0.0 };

    numOfAcres = tractOfLand / oneAcreToSqFt;

    std::cout << "The number of acres in a tract of land with " << tractOfLand << " square feet\n";
    std::cout << "is " << numOfAcres << " acres\n";

    return 0;
}