#ifndef LARGE_INCLUDED
#define LARGE_INCLUDED

#include <C:\Users\HalfVampire\Documents\LLD\ParkingLot\version3\Interfaces\ParkingSpot.h>
#include <string>

class Large : public ParkingSpot
{
private:
public:
    Large() = default;
    // Large(int _parkingSpotID, std::string _floorNum, double _amount) : parkingSpotID_(_parkingSpotID), floorNum_(_floorNum), isFree_(true), amount_(_amount) {};
    Large(int _parkingSpotID, std::string _floorNum, double _amount)
    {
        parkingSpotID_ = _parkingSpotID;
        floorNum_ = _floorNum;
        isFree_ = true;
        amount_ = _amount;
    }
    ~Large() = default;

    double getCost() override
    {
        return amount_;
    }
};
#endif