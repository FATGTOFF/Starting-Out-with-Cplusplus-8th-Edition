/*
16. Diamond Pattern
Write a program that displays the following pattern:
    *
   ***
  *****
 *******
  *****
   ***
    *
*/
#include <iostream>

int main()
{
    char star{ '*' };

    std::cout << "   " << star << std::endl;
    std::cout << "  " << star << star << star << std::endl;
    std::cout << " " << star << star << star << star << star << std::endl;
    std::cout << star << star << star << star << star << star << star << std::endl;
    std::cout << " " << star << star << star << star << star << std::endl;
    std::cout << "  " << star << star << star << std::endl;
    std::cout << "   " << star << std::endl;

    return 0;
}
