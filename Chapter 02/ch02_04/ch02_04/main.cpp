/*
4. Restaurant Bill
Write a program that computes the tax and tip on a restaurant bill for a patron with
a $88.67 meal charge. The tax should be 6.75 percent of the meal cost. The tip should
be 20 percent of the total after adding the tax. Display the meal cost, tax amount, tip
amount, and total bill on the screen.
*/
#include <iostream>

int main()
{
    double mealCharge{ 88.67 };
    const double tax{ 0.0675 };
    const double tip{ .20 };
    double taxAmount{ 0.0 };
    double tipAmount{ 0.0 };
    double total{ 0.0 };

    taxAmount = mealCharge * tax;
    tipAmount = (mealCharge + taxAmount) * tip;
    total = mealCharge + taxAmount + tipAmount;

    std::cout << "Meal Cost  $" << mealCharge << std::endl;
    std::cout << "Tax Amount $" << taxAmount << std::endl;
    std::cout << "Tip Amount $" << tipAmount << std::endl;
    std::cout << "Total Bill $" << total << std::endl;

    return 0;
}