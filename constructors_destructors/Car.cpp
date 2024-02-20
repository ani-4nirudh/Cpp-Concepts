#include <iostream>
#include "Car.hpp"
#include "Fuel.hpp"

Car::Car(Fuel *ptr_fuel)
{
    std::cout << "The hypercar is gonna run for approximately " << ptr_fuel->fuel_amt << " km." << std::endl;
}

Car::~Car()
{
    std::cout << "The program is done." << std::endl;
}