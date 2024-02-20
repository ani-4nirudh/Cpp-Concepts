#include <string>
#include "Car.hpp"
#ifndef TOYOTA_HPP_INCLUDED
#define TOYOTA_HPP_INCLUDED

class Toyota : public Car
{
    public:
        std::string model_name;
        void WasDaModel();
};

#endif