#include <iostream>
#include "Helpers.h"

int main()
{
    long long a, b;

    std::cout << "This program can calculate square of the sum of 2 entered numbers." << std::endl;

    std::cout << "Enter the first number: ";
    std::cin >> a;
    std::cout << "Enter the second number: ";
    std::cin >> b;

    std::cout << "Square of the sum of entered numbers = " << SquareSum(a, b);
    return 0;
}