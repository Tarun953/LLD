#ifndef COMPACT_INCLUDED
#define COMPACT_INCLUDED

#include <C:\Users\HalfVampire\Documents\LLD\ParkingLot\version3\Interfaces\ParkingSpot.h>
#include <string>

class Compact : public ParkingSpot
{
private:
public:
    Compact() = default;
    // Compact(int _parkingSpotID, std::string _floorNum, double _amount) : parkingSpotID_(_parkingSpotID), floorNum_(_floorNum), isFree_(true), amount_(_amount) {};
    Compact(int _parkingSpotID, std::string _floorNum, double _amount)
    {
        parkingSpotID_ = _parkingSpotID;
        floorNum_ = _floorNum;
        isFree_ = true;
        amount_ = _amount;
    }
    ~Compact() = default;

    double getCost() override
    {
        return amount_;
    }
};
#endif