#ifndef BIKE_INCLUDED
#define BIKE_INCLUDED

#include <C:\Users\HalfVampire\Documents\LLD\ParkingLot\version3\Interfaces\Vehicle.h>
#include <string>

class Bike : public Vehicle
{
private:
public:
    Bike() = default;
    Bike(std::string _vehicleID)
    {
        vehicleID_ = _vehicleID;
    }
    ~Bike() = default;

    std::string getVehicleID()
    {
        return vehicleID_;
    }
};
#endif