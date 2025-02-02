#include <C:\Users\HalfVampire\Documents\LLD\ParkingLot\version2\Vehicle.h>
#include <C:\Users\HalfVampire\Documents\LLD\ParkingLot\version2\enums\VehicleType.h>
#include <C:\Users\HalfVampire\Documents\LLD\ParkingLot\version2\enums\SlotSize.h>
#include <string>

class Car : public Vehicle
{
private:
    std::string carNumber_;

public:
    Car() = default;
    ~Car() = default;

    VehicleType getType() override
    {
        return VehicleType::CAR;
    }

    SlotSize getSlotSize() override
    {
        return SlotSize::MEDIUM;
    }
};
