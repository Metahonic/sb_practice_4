#include <iostream>
#include <cmath>

class Vector
{
private:
    float x_;
    float y_;
    float z_;
    float m_;
    
public:
    Vector(float x, float y, float z) : x_(x), y_(y), z_(z)
    {
        std::cout << "X:" << x << "; " << "Y:" << y << "; " << "Z:" << z << "\n\n";
        m_ = sqrt(std::pow(x, 2) + std::pow(y, 2) + std::pow(z, 2));
        std::cout << "Vector length: " << m_ << "\n";
    }
};

int main()
{
    Vector Default(1,2,3);
    return 0;
}