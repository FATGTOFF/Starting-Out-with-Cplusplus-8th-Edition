/*
2. Sales Prediction
The East Coast sales division of a company generates 58 percent of total sales. Based
on that percentage, write a program that will predict how much the East Coast division
will generate if the company has $8.6 million in sales this year.
*/
#include <iostream>

int main()
{
    const double percentage{ .58 };
    double sales{ 8.6 };
    double totalSales{ 0.0 };

    totalSales = (sales * percentage);
    std::cout << "The East Coast division will generate " << totalSales << " million" << std::endl;
    return 0;
}