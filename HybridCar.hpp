#include "ElectricEngine.hpp"
#include "PetrolEngine.hpp"
#include "ElectricCar.hpp"
#include "PetrolCar.hpp"

class HybridCar : virtual public PetrolCar, virtual public ElectricCar
{
public:
    HybridCar(PetrolEngine* petrolEng, ElectricEngine* electricEng);
    virtual ~HybridCar();
    void accelerate(int speed);
    void refill();
};

