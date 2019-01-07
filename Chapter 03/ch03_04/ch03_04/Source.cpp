#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;

int main()
{
    string month1{ "" };
    string month2{ "" };
    string month3{ "" };
    double amtRain1{ 0.0 };
    double amtRain2{ 0.0 };
    double amtRain3{ 0.0 };

    cout << "Enter the name of the month and the amount\n";
    cout << "of rain(inches) for the month\n";
    cin >> month1 >> amtRain1 >> month2 >> amtRain2
	   >> month3 >> amtRain3;

    double average = (amtRain1 + amtRain2 + amtRain3) / 3;

    cout << "The average rainfall for " << month1 << ", " << month2
	   << ", " << month3 << " is " << average << " inches.\n";

    return 0;
}