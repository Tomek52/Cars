#pragma once
#include <iostream>
#include "ElectricEngine.hpp"
#include "Car.hpp"

class ElectricCar : public Car
{
public:
    ElectricCar(ElectricEngine* engine);
    ~ElectricCar();
    void refill();
private:
    void charge() {}
    ElectricEngine* engine_;
};

