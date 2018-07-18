#pragma once
#include <iostream>
#include "PetrolEngine.hpp"
#include  "Car.hpp"

class PetrolCar : public Car
{
public:
    PetrolCar(PetrolEngine* engine); 
    virtual ~PetrolCar();
    void refill();
private:
    void refuel() {}
    PetrolEngine* engine_;
};

