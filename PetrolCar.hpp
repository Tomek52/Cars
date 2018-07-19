#pragma once
#include <iostream>
#include "PetrolEngine.hpp"
#include "Car.hpp"

class PetrolCar : virtual public Car
{
private:
    void refuel();
    PetrolEngine* engine_;
public:
    PetrolCar(PetrolEngine* engine); 
    virtual ~PetrolCar();
    void refill();
};

