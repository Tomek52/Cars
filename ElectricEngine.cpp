#include "ElectricEngine.hpp"
#include <iostream>

ElectricEngine::ElectricEngine(int power, int batteryCapacity)
    : power_(power)
    , batteryCapacity_(batteryCapacity)
{
    if(power<0) throw InvalidElectricPower();
    if(batteryCapacity<0) throw InvalidBatteryCapacity();
    std::cout << __FUNCTION__ << std::endl;
}
