#include <C:\Users\HalfVampire\Documents\LLD\ParkingLot\version2\Vehicle.h>
#include <C:\Users\HalfVampire\Documents\LLD\ParkingLot\version2\enums\VehicleType.h>
#include <C:\Users\HalfVampire\Documents\LLD\ParkingLot\version2\enums\SlotSize.h>
#include <string>

class Bike : public Vehicle
{
private:
    std::string bikeNumber_;

public:
    Bike() = default;
    ~Bike() = default;

    VehicleType getType() override
    {
        return VehicleType::BIKE;
    }

    SlotSize getSlotSize() override
    {
        return SlotSize::SMALL;
    }
};
