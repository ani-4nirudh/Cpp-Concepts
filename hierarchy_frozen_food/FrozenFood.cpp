#include <iostream>
#include "FrozenFood.hpp"

float FrozenFood::GetPrice()
{
    return Price;
}

float FrozenFood::GetWeight()
{
    return Weight;
}

void FrozenFood::BakeDatShizzUp()
{
    std::cout << std::endl;
    std::cout << "##################################" << std::endl;
    for (int i = 0; i < 3; i++)
    {
        std::cout << "Heating the oven to " << Temperature << " °C ..." << std::endl;
    }
    std::cout << "Baking ..." << std::endl;
    std::cout << "##################################" << std::endl;
    std::cout << std::endl;
}

FrozenFood::FrozenFood(float APrice, float AWeight, float ATemperature)
{
    if (APrice <= 0)
    {
        std::cout << "Enter a positive value of price!!" << std::endl;
        Price = 0;
    } else
    {
        Price = APrice;
    }

    if (AWeight <= 0)
    {
        std::cout << "Enter a positive value of weight!!" << std::endl;
        Weight = 0;
    } else 
    {
        Weight = AWeight;
    }

    if (ATemperature <= 0)
    {
        std::cout << "Enter a positive value of temperature!!" << std::endl;
        Temperature = 0;
    } else 
    {
        Temperature = ATemperature;
    }
}