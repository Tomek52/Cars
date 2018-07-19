#include "HybridCar.hpp"

HybridCar::HybridCar(PetrolEngine* petrolEng, ElectricEngine* electricEng)
        : PetrolCar(petrolEng)
        , ElectricCar(electricEng)
{
    std::cout<<"create hybrid car"<<std::endl;
}

HybridCar::~HybridCar()
{
    std::cout<<"delete hybrid car"<<std:endl;
}

void HybridCar::accelerate(int speed)
{
    PetrolCar::accelerate(speed);
}

void HybridCar::refill()
{
    PetrolCar::refill();
    ElectriCar::refill();
}
