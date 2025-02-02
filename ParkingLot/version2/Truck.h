#include <C:\Users\HalfVampire\Documents\LLD\ParkingLot\version2\Vehicle.h>
#include <C:\Users\HalfVampire\Documents\LLD\ParkingLot\version2\enums\VehicleType.h>
#include <C:\Users\HalfVampire\Documents\LLD\ParkingLot\version2\enums\SlotSize.h>
#include <string>

class Truck : public Vehicle
{
private:
    std::string truckNumber_;

public:
    Truck() = default;
    ~Truck() = default;

    VehicleType getType() override
    {
        return VehicleType::TRUCK;
    }

    SlotSize getSlotSize() override
    {
        return SlotSize::LARGE;
    }
};
