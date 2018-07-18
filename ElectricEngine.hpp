#pragma once
#include <iostream>
#include <stdexcept>

class InvalidElectricPower : public std::invalid_argument
{
    public:
        InvalidElectricPower()
            : invalid_argument("power must be positive value")
        {}
};

class InvalidBatteryCapacity : public std::invalid_argument
{
    public:
        InvalidBatteryCapacity()
            : invalid_argument("battery capacity must be positive value")
        {}
};

class ElectricEngine
{
public:
    ElectricEngine(int power, int batteryCapacity);
    
    void setPower(int power)
    {
        if (power < 0) {
            std::cerr << "Power cannot be negative" << std::endl;
            return;
        }
        power_ = power;
    }
    int getPower() const
    {
        return power_;
    }

private:
    int power_;             // in HP 
    int batteryCapacity_;   // in Ah
};

