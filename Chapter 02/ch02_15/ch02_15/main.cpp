/*
15. Triangle Pattern
Write a program that displays the following pattern on the screen:
	   *
	  ***
      *****
     *******
*/
#include <iostream>

int main()
{
    char star{ '*' };

    std::cout << "   " << star << std::endl;
    std::cout << "  " << star << star << star << std::endl;
    std::cout << " " << star << star << star << star << star << std::endl;
    std::cout << star << star << star << star << star << star << star << std::endl;

    return 0;
}