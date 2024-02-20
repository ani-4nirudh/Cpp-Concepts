#include <iostream>

struct Point3D
{
    public:
        double x, y, z;
};

int main(int argc, char* argv[])
{
    Point3D point_1;
    point_1.x = 22.05;
    point_1.y = 32.67;
    point_1.z = 42.72;

    Point3D point_2;
    point_2 = point_1;

    std::cout << "The x-coordinate is: " << point_2.x << std::endl;
    std::cout << "The y-coordinate is: " << point_2.y << std::endl;
    std::cout << "The z-coordinate is: " << point_2.z << std::endl;
    
    return EXIT_SUCCESS;
}