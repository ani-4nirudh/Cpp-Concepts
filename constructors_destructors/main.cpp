#include <iostream>
#include "Fuel.hpp"
#include "Car.hpp"

int main(int argc, char *argv[])
{
    // On stack   
    Fuel myFuel;
    myFuel.fuel_amt = 100;
    myFuel.fuel_type = "Petrol";
    Car myCar(&myFuel);

    // On heap
    Fuel *ptr_fuel_2 = new Fuel;
    ptr_fuel_2->fuel_amt = 200;
    ptr_fuel_2->fuel_type = "Shell";
    Car *ptr_car_2 = new Car(ptr_fuel_2);

    delete ptr_car_2, ptr_fuel_2;
    ptr_car_2 = 0;
    ptr_fuel_2 = 0;
    
    return EXIT_SUCCESS;
}