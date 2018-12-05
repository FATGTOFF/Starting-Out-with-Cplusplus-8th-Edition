/*
13. Circuit Board Price
An electronics company sells circuit boards at a 35 percent profit. 
Write a program that will calculate the selling price of a circuit 
board that costs $14.95. Display the result on the screen.
*/
#include <iostream>

int main()
{
    double percentProfits{ .35 }, costs{ 14.95 }, sellingPrice{ 0.0 };

    sellingPrice = (costs * percentProfits) + costs;
    std::cout << "The selling price is $" << sellingPrice << std::endl;

    return 0;
}