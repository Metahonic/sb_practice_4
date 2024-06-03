#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter any string for analyzis: ";
    std::string string;
    std::getline(std::cin, string);

    std::cout << "Entered string: " << string <<"\n";
    std::cout << "String length: " << string.length() << "\n";
    std::cout << "First character: " << string.front() << "\n";
    std::cout << "Last character: " << string.back() << "\n";

}