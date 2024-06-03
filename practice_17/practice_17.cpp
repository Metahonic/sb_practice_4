#include <iostream>
#include <vector>
#include <cmath>

class Vector
{
private:
    std::vector<float> XYZ{1,1,1};
    double a{ 0 };
public:
    Vector()
    {
        std::cout << "X:" << XYZ[0] << "; " << "Y:" << XYZ[1] << "; " << "Z:" << XYZ[2] << "\n\n";
        a = sqrt(std::pow(XYZ[0], 2) + std::pow(XYZ[1], 2) + std::pow(XYZ[2], 2));
        std::cout << "Vector length: " << a << "\n";
    }
};

int main()
{
    Vector Default;
    return 0;
}