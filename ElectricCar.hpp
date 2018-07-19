#pragma once
#include <iostream>
#include "ElectricEngine.hpp"
#include "Car.hpp"

class ElectricCar : virtual public Car
{
public:
    ElectricCar(ElectricEngine* engine);
    virtual ~ElectricCar();
    void refill();
private:
    void charge() {}
    ElectricEngine* engine_;
};

