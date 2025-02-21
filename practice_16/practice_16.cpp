﻿#include <iostream>
#include <time.h>

int main()
{
    const int N{ 6 };
    int array[N][N] = {};

    struct tm buf;
    time_t t = time(NULL);
    localtime_s(&buf, &t);

    int DivisionRemainder = (buf.tm_mday) % N;
    int arrayStringSumm{ 0 };

    for (int i{ 0 }; i < N; i++)
    {
        for (int j{ 0 }; j < N; j++)
        {
            array[i][j] = i+j;
            std::cout << array[i][j] << " ";
            if (j == DivisionRemainder)
            {
                arrayStringSumm = arrayStringSumm + j;
            }

        }
        std::cout << "\n";
    }
    
    std::cout << "\n";
    std::cout << "Summ of array elements with specified line index: " << arrayStringSumm << "\n";
    return 0;
}