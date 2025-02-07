#ifndef PARKING_SPOT_INCLUDED
#define PARKING_SPOT_INCLUDED

#include <string>

class ParkingSpot
{
public:
    ParkingSpot() = default;
    virtual ~ParkingSpot() = default;

    int parkingSpotID_;
    std::string floorNum_;
    bool isFree_;
    double amount_;

    virtual double getCost() = 0;
};
#endif