#ifndef MINI_INCLUDED
#define MINI_INCLUDED

#include <C:\Users\HalfVampire\Documents\LLD\ParkingLot\version3\Interfaces\ParkingSpot.h>
#include <string>

class Mini : public ParkingSpot
{
private:
public:
    Mini() = default;
    // Mini(int _parkingSpotID, std::string _floorNum, double _amount) : parkingSpotID_(_parkingSpotID), floorNum_(_floorNum), isFree_(true), amount_(_amount) {};
    Mini(int _parkingSpotID, std::string _floorNum, double _amount)
    {
        parkingSpotID_ = _parkingSpotID;
        floorNum_ = _floorNum;
        isFree_ = true;
        amount_ = _amount;
    }
    ~Mini() = default;

    double getCost() override
    {
        return amount_;
    }
};
#endif