#include "FrozenFood.hpp"
#ifndef FROZENPIZZA_HPP
#define FROZENPIZZA_HPP

class FrozenPizza : public FrozenFood
{
    protected:
        float Diameter;
    
    public:
        FrozenPizza(float APrice, float AWeight, float ATemperature, float ADiameter);
        float AreaOfPizza();
        virtual void Thaw();
};

#endif