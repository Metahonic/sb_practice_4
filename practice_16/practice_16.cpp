#include <iostream>
#include <time.h>

int main()
{
    const int N{ 6 };
    int array[N][N] = {};

    for (int i{ 0 }; i < N; i++)
    {
        for (int j{ 0 }; j < N; j++)
        {
            array[i][j] = i+j;
            std::cout << array[i][j] << " ";
        }
        std::cout << "\n";
    }

    struct tm buf;
    time_t t = time(NULL);
    localtime_s(&buf, &t);
    
    int DivisionRemainder = (buf.tm_mday)%N;
    int arrayStringSumm{0};
    
    for (int a{ 0 }; a < N; a++)
    {
        arrayStringSumm = arrayStringSumm + array[DivisionRemainder][a];
    }
    std::cout << "\n";
    std::cout << "Summ of array elements with specified line index: " << arrayStringSumm << "\n";
    return 0;
}