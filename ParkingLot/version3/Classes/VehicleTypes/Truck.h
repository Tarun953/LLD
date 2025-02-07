#ifndef TRUCK_INCLUDED
#define TRUCK_INCLUDED

#include <C:\Users\HalfVampire\Documents\LLD\ParkingLot\version3\Interfaces\Vehicle.h>
#include <string>

class Truck : public Vehicle
{
private:
public:
    Truck() = default;
    Truck(std::string _vehicleID)
    {
        vehicleID_ = _vehicleID;
    }
    ~Truck() = default;

    std::string getVehicleID()
    {
        return vehicleID_;
    }
};
#endif