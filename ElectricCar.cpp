#include "ElectricCar.hpp"

ElectricCar::ElectricCar(ElectricEngine* engine)
    : engine_(engine)
{
    std::cout<<"create electric car"<<std::endl;
}

ElectricCar::~ElectricCar()
{
    std::cout<<"delete electric car"<<std::endl;
    delete engine_;
}

void ElectricCar::charge()
{
    std::cout<<"charging finished"<<std::endl;
}

void ElectricCar::refill()
{
    charge();
}
