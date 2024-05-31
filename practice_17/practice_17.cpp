#include <iostream>
#include <vector>
#include <cmath>

class Vector
{
private:
    std::vector<int> Coordinates{0,1,0,1,0,1};
public:
    void Show()
    {
        std::cout << "X1:" << Coordinates[0] << "; " << "X2:" << Coordinates[1] << "\n";
        std::cout << "Y1:" << Coordinates[0] << "; " << "Y2:" << Coordinates[1] << "\n";
        std::cout << "Z1:" << Coordinates[0] << "; " << "Z2:" << Coordinates[1] << "\n";
    }
    void VectorLength()
    {
        double a = sqrt(std::pow(Coordinates[1] - Coordinates[0], 2) + std::pow(Coordinates[3] - Coordinates[2], 2) + std::pow(Coordinates[5] - Coordinates[4], 2));
        std::cout << "Vector length: " << a << "\n";
    }
};

int main()
{
    Vector Default;
    Default.Show();
    std::cout << "\n";
    Default.VectorLength();
    return 0;
}