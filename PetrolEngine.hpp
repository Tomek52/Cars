#pragma once
#include <stdexcept>

class InvalidGear : public std::invalid_argument
{
public:
    InvalidGear() 
        : invalid_argument("not proper gear selected")
    {}
};

class InvalidCapacity : public std::invalid_argument
{
    public:
        InvalidCapacity()
            : invalid_argument("capacity must be positive value")
        {}
};

class InvalidPower : public std::invalid_argument
{
    public:
        InvalidPower()
            : invalid_argument("power must be positive value")
        {}
};

class InvalidGears : public std::invalid_argument
{
    public:
        InvalidGears()
            : invalid_argument("gears must be positive value")
        {}
};

class PetrolEngine
{
public:
    PetrolEngine(int power, float capacity, int gears);
    void changeGear(int gear);

    int power_;         // in HP
    float capacity_;    // in ccm
    int gears_;
    int currentGear_;
};

