#include <iostream>
#include "Car.hpp"

void Car::IsCategory()
{
    int car_speed = TopSpeed;
    
    if(car_speed >= 200 && car_speed <= 250)
    {
        std::cout << "It's a sportscar." <<  std::endl;
    } else if (car_speed > 250 && car_speed <= 350)
    {
        std::cout << "It's a supercar." << std::endl;
    } else if (car_speed > 350)
    {
        std::cout << "It's a hypercar." << std::endl; 
    } else if (car_speed < 200)
    {
        std::cout << "You poor brev!" << std::endl;
    }
}

void Car::CarInfo()
{
    std::string car_model = Model;
    std::string car_brand = Brand;
    
    std::cout << "The car is manufactured by " << car_brand << std::endl;
    std::cout << "The model name is " << car_model << std::endl;
}
