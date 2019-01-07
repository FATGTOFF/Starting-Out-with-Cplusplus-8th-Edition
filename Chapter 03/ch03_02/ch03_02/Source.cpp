#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;


int main()
{
    const double classA{ 15.00 };
    const double classB{ 12.00 };
    const double classC{ 9.00 };


    cout << "How many tickets of each class of seats were sold\n";
    cout << "Class A: ";
    int numOfTickets{ 0 };
    cin >> numOfTickets;
    double totalA = numOfTickets * classA;

    cout << "Class B: ";
    cin >> numOfTickets;
    double totalB = numOfTickets * classB;

    cout << "Class C: ";
    cin >> numOfTickets;
    double totalC = numOfTickets * classC;

    double grandTotal = totalA + totalB + totalC;
    cout << std::fixed << std::setprecision(2) << std::showpoint;
    cout << "The Amount of Income Generated from Ticket Sales is $" << grandTotal << "\n";

    return 0;

}