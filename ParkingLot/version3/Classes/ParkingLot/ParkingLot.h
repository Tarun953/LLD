#ifndef PARKING_LOT_INCLUDED
#define PARKING_LOT_INCLUDED

#include <C:\Users\HalfVampire\Documents\LLD\ParkingLot\version3\Classes\Entrance.h>
#include <C:\Users\HalfVampire\Documents\LLD\ParkingLot\version3\Classes\Exit.h>
#include <C:\Users\HalfVampire\Documents\LLD\ParkingLot\version3\Classes\DisplayBoard\DisplayBoard.h>
#include <C:\Users\HalfVampire\Documents\LLD\ParkingLot\version3\Interfaces\ParkingSpot.h>
#include <string>
#include <vector>

class ParkingLot
{
private:
    static ParkingLot *parkingLot_;

    std::string parkingLotName_;
    std::vector<Entrance> entrances_;
    std::vector<Exit> exits_;
    DisplayBoard *displayBoard_;
    std::vector<ParkingSpot *> parkingSpots_;
    ParkingLot() = default;
    ParkingLot(std::string _name)
    {
        parkingLotName_ = _name;
    }

public:
    ParkingLot(ParkingLot &obj) = delete;

    static ParkingLot *getInstance()
    {
        if (parkingLot_ == nullptr)
        {
            parkingLot_ = new ParkingLot();
        }
    }
    ~ParkingLot() = default;
};
#endif