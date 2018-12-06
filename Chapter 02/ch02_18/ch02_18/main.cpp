/*
18. Energy Drink Consumption
A soft drink company recently surveyed 16,500 of its customers and found that
approximately 15 percent of those surveyed purchase one or more energy drinks per
week. Of those customers who purchase energy drinks, approximately 58 percent of
them prefer citrus-flavored energy drinks. Write a program that displays the following:
• The approximate number of customers in the survey who purchase one or more
energy drinks per week
• The approximate number of customers in the survey who prefer citrus-flavored energy
drinks
*/
#include <iostream>

int main()
{
    double surveyedCustomers{ 16500 }, purchaseDrinksPercent{ .15 }, citrusFlavoredPercent{ .58 },
	   customersPurchaseDrink{ 0.0 }, customerPreferCitrus{ 0.0 };

    customersPurchaseDrink = surveyedCustomers * purchaseDrinksPercent;
    customerPreferCitrus = customersPurchaseDrink * citrusFlavoredPercent;

    std::cout << "The approximate number of customers in the survey who purchase\n";
    std::cout << "one or more energy drinks per week is " << customersPurchaseDrink << std::endl;

    std::cout << "The approximate number of customers in the survey who prefer\n";
    std::cout << "citrus-flavored energy drink is " << customerPreferCitrus << std::endl;

    return 0;
}