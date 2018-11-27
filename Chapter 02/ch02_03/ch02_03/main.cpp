/*
3. Sales Tax
Write a program that will compute the total sales tax on a $95 purchase. Assume the
state sales tax is 4 percent and the county sales tax is 2 percent.
*/
#include <iostream>

int main()
{
    double purchase{ 95.0 };
    double stateTax{ 0.04 };
    double countyTax{ 0.02 };
    double totalTax{ 0.0 };

    totalTax = (purchase * stateTax) + (purchase * countyTax);
    std::cout << "The total sales tax on a $95 purchase is $" << totalTax << std::endl;
    return 0;
}