#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;

int main()
{
    double testScrs1{ 0.0 };
    double testScrs2{ 0.0 };
    double testScrs3{ 0.0 };
    double testScrs4{ 0.0 };
    double testScrs5{ 0.0 };

    cout << "Enter Five Test Scores\n";
    cin >> testScrs1 >> testScrs2 >> testScrs3
	   >> testScrs4 >> testScrs5;

    double average = (testScrs1 + testScrs2 + testScrs3
	   + testScrs4 + testScrs5) / 5;
    cout << std::fixed << std::setprecision(1);

    cout << "The Average of the Test Scores is " << average << "\n";

    return 0;
}