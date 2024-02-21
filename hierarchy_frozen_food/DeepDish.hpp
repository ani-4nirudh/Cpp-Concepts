#include "FrozenPizza.hpp"
#ifndef DEEPDISH_HPP
#define DEEPDISH_HPP

class DeepDishPizza : public FrozenPizza
{
    protected:
        float Height;

    public:
        DeepDishPizza(float APrice, float AWeight, float ATemperature, float ADiameter, float AHeight);
        float VolumeDeepDish();
        virtual void Thaw();
};

#endif