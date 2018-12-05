/*
9. Cyborg Data Type Sizes
You have been given a job as a programmer on a Cyborg supercomputer. In order to
accomplish some calculations, you need to know how many bytes the following data
types use: char , int , float , and double . You do not have any manuals, so you can’t
look this information up. Write a C++ program that will determine the amount of
memory used by these types and display the information on the screen.
*/
#include <iostream>

int main()
{
    std::cout << "The data type char takes " << sizeof(char) << " bytes\n";
    std::cout << "The data type int takes " << sizeof(int) << " bytes\n";
    std::cout << "The data type float takes " << sizeof(float) << " bytes\n";
    std::cout << "The data type double takes " << sizeof(double) << " bytes\n";

    return 0;
}