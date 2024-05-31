#include <iostream>
#include <vector>

class Vector
{
public:
    Vector() : x(1), y(1), z(1)
    {}
    Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z)
    {}

    void Show()
    {
        std::cout << "\n" << "X:" << x << ", " << "Y: " << y << ", " << "Z: " << z;
    }
private:
    double x{ 1 };
    double y{ 1 };
    double z{ 1 };
};

int main()
{
    Vector v;
    v.Show();    
}