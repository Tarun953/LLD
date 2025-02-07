#ifndef VEHICLE_INCLUDED
#define VEHICLE_INCLUDED

#include <string>

class Vehicle
{
public:
    Vehicle() = default;
    virtual ~Vehicle() = default;

    std::string vehicleID_;

    virtual std::string getVehicleID() = 0;
};
#endif