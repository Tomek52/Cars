#include "PetrolCar.hpp"

PetrolCar::PetrolCar(PetrolEngine* engine)
    : engine_(engine)
{
    std::cout<<"Create petrol car"<<std::endl;
}

PetrolCar::~PetrolCar()
{
    std::cout<<"Delete petrol car"<<std::endl;
    delete engine_;
}

void PetrolCar::refuel() {}

void PetrolCar::refill()
{
    refuel();
}

