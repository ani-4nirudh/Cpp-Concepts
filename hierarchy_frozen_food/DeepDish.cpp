#include <iostream>
#include <cmath>
#include "FrozenPizza.hpp"
#include "DeepDish.hpp"

DeepDishPizza::DeepDishPizza(float APrice, float AWeight, float ATemperature, float ADiameter, float AHeight) : FrozenPizza(APrice, AWeight, ATemperature, ADiameter)
{
    if (AHeight <= 0)
    {
        Height = 0;
        std::cout << "Enter a positive value of height: " << std::endl;
    } else
    {
        Height = AHeight;
    }
}

float DeepDishPizza::VolumeDeepDish()
{
    float Area = AreaOfPizza();
    return (Area * Height); 
}

void DeepDishPizza::Thaw()
{
    std::cout << "Thawing the deep dish pizza lol..." << std::endl;
    std::cout << std::endl;
}