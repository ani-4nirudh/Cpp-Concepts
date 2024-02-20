#include <iostream>
#include "Car.hpp"
#include "Toyota.hpp"

int main(int argc, char *argv[])
{
    Toyota myCar;
    myCar.num_wheels = 4;
    myCar.HowManyWheels();

    myCar.model_name = "Prius";
    myCar.WasDaModel();
    
    return EXIT_SUCCESS;
}