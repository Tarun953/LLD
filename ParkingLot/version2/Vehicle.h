#include <C:\Users\HalfVampire\Documents\LLD\ParkingLot\version2\enums\VehicleType.h>
#include <C:\Users\HalfVampire\Documents\LLD\ParkingLot\version2\enums\SlotSize.h>
#include <string>

class Vehicle
{
public:
    virtual VehicleType getType() = 0;
    virtual SlotSize getSlotSize() = 0;

    std::string vehicleNo_;

    Vehicle() = default;
    virtual ~Vehicle();
};
