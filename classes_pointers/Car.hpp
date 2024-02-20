#ifndef CAR_HPP_INCLUDED
#define CAR_HPP_INCLUDED
#include <string>

class Car
{
    public:

        // Member Functions
        std::string Model;
        std::string Brand;
        int Odometer;
        int TopSpeed;
        int Horsepower;

        // Member Functions
        void IsCategory();
        void CarInfo();
};

#endif