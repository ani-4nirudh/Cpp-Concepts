#ifndef CAR_HPP_INCLUDED
#define CAR_HPP_INCLUDED
#include "Fuel.hpp"

class Car
{
    public:
        Car(Fuel *ptr_fuel);
        ~Car();
};

#endif