#include <iostream>
#include <cmath>
#include "FrozenPizza.hpp"

FrozenPizza::FrozenPizza(float APrice, float AWeight, float ATemperature, float ADiameter) : FrozenFood(APrice, AWeight, ATemperature)
{
    if (ADiameter <= 0)
    {
        Diameter = 0;
        std::cout << "Enter a positive value for diameter: " << std::endl;
    } else
    {
        Diameter = ADiameter;
    }
}

float FrozenPizza::AreaOfPizza()
{
    double pi = M_PI;
    float area = pi * (Diameter / 2) * (Diameter / 2);
    return area;
}

void FrozenPizza::Thaw()
{
    std::cout << "Thawing the frozen pizza lol ...." << std::endl;
    std::cout << std::endl;
}