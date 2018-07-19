#include "PetrolEngine.hpp"
#include <iostream>

PetrolEngine::PetrolEngine(int power,
                           float capacity,
                           int gears)
    : power_(power)
    , capacity_(capacity)
    , gears_(gears)
    , currentGear_(0)
{
    std::cout << __FUNCTION__ << std::endl;
    if(power<=0) throw InvalidPower();
    if(capacity<=0) throw InvalidCapacity();
    if(gears<=0) throw InvalidGears();
}

void PetrolEngine::changeGear(int gear)
{
    std::cout << __FUNCTION__ << std::endl;
    if (gear > gears_ || gear < 0)
    {
        throw InvalidGear();
    }
    currentGear_ = gear;
}
