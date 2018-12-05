/*
8. Total Purchase
A customer in a store is purchasing five items. The prices of the five items are
    Price of item 1 = $15.95
    Price of item 2 = $24.95
    Price of item 3 = $6.95
    Price of item 4 = $12.95
    Price of item 5 = $3.95
Write a program that holds the prices of the five items in five variables. Display each
item’s price, the subtotal of the sale, the amount of sales tax, and the total. Assume the
sales tax is 7%.
*/
#include <iostream>

int main()
{
    double item1{ 15.95 }, item2{ 24.95 }, item3{ 6.95 },
	   item4{ 12.95 }, item5{ 3.95 }, salesTax{ 0.07 },
	   subTotal{ 0.0 }, amountOfSalesTax{ 0.0 }, total{ 0.0 };


    total = (item1 * salesTax) + item1;
    std::cout << "Item Number 1" << std::endl;
    std::cout << " -Subtotal: $" << item1 << std::endl;
    std::cout << " -Amount of Sales Tax: $" << item1 * salesTax << std::endl;
    std::cout << " -Total: $" << total << std::endl;

    total = (item2 * salesTax) + item1;
    std::cout << "Item Number 2" << std::endl;
    std::cout << " -Subtotal: $" << item2 << std::endl;
    std::cout << " -Amount of Sales Tax: $" << item2 * salesTax << std::endl;
    std::cout << " -Total: $" << total << std::endl;

    total = (item3 * salesTax) + item1;
    std::cout << "Item Number 3" << std::endl;
    std::cout << " -Subtotal: $" << item3 << std::endl;
    std::cout << " -Amount of Sales Tax: $" << item3 * salesTax << std::endl;
    std::cout << " -Total: $" << total << std::endl;

    total = (item4 * salesTax) + item1;
    std::cout << "Item Number 4" << std::endl;
    std::cout << " -Subtotal: $" << item4 << std::endl;
    std::cout << " -Amount of Sales Tax: $" << item4 * salesTax << std::endl;
    std::cout << " -Total: $" << total << std::endl;

    total = (item5 * salesTax) + item1;
    std::cout << "Item Number 5" << std::endl;
    std::cout << " -Subtotal: $" << item5 << std::endl;
    std::cout << " -Amount of Sales Tax: $" << item5 * salesTax << std::endl;
    std::cout << " -Total: $" << total << std::endl;


    return 0;
}