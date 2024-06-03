#include <iostream>

void FindOddNumbers(int Limit, bool isOdd)
{
    for (int i=!isOdd; i <= Limit; i=i+2)
    {
        std::cout << i << "\n";
    }
}

int main()
{
    int Limit{14};
    bool isOdd{ true };

    FindOddNumbers(Limit, isOdd);
    return 0;
}