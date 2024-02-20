#include <iostream>
#include "Car.hpp"

int main(int argc, char *argv[])
{
    Car *ptr_my_car = new Car;
    ptr_my_car->Model = "M3 GTR";
    ptr_my_car->Brand = "BMW";
    ptr_my_car->CarInfo();

    delete ptr_my_car;
    ptr_my_car = 0; 
    
    return EXIT_SUCCESS;
}