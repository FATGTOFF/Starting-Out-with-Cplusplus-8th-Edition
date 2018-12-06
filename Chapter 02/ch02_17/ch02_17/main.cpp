/*
17. Stock Commission
Kathryn bought 750 shares of stock at a price of $35.00 per share. She must pay her
stockbroker a 2 percent commission for the transaction. Write a program that calculates
and displays the following:
    • The amount paid for the stock alone (without the commission)
    • The amount of the commission
    • The total amount paid (for the stock plus the commission)
*/
#include <iostream>

int main()
{
    int numOfShares{ 750 };
    double stockPrice{ 35.00 }, commission{ .02 }, 
	   amountStockAlone{ 0.0 }, ammountCommision{ 0.0 },
	   totalAmountPaid{ 0.0 };

    amountStockAlone = numOfShares * stockPrice;
    ammountCommision = amountStockAlone * commission;
    totalAmountPaid = amountStockAlone + ammountCommision;

    std::cout << "The amount paid for the stock alone is $" << amountStockAlone << std::endl;
    std::cout << "The amount of commission is $" << ammountCommision << std::endl;
    std::cout << "The total amount paid is $" << totalAmountPaid << std::endl;

    return 0; 
}