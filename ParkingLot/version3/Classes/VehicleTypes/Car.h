#ifndef CAR_INCLUDED
#define CAR_INCLUDED

#include <C:\Users\HalfVampire\Documents\LLD\ParkingLot\version3\Interfaces\Vehicle.h>
#include <string>

class Car : public Vehicle
{
private:
public:
    Car() = default;
    Car(std::string _vehicleID)
    {
        vehicleID_ = _vehicleID;
    }
    ~Car() = default;

    std::string getVehicleID()
    {
        return vehicleID_;
    }
};
#endif