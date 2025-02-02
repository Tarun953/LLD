#include <string>
#include <vector>
#include <C:\Users\HalfVampire\Documents\LLD\ParkingLot\version2\enums\ParkingStatus.h>
#include <C:\Users\HalfVampire\Documents\LLD\ParkingLot\version2\Vehicle.h>
#include <C:\Users\HalfVampire\Documents\LLD\ParkingLot\version2\enums\SlotSize.h>

class ParkingSlot
{
private:
    std::string slotId_;
    std::string slotNumber_;
    ParkingStatus parkingStatus_;
    SlotSize slotSize_;
    Vehicle *vehicle_;

public:
    ParkingSlot(std::string _slotId, std::string _slotNumber, ParkingStatus _parkingStatus, SlotSize _slotSize_) : slotId_(_slotId), slotNumber_(_slotNumber), parkingStatus_(_parkingStatus), slotSize_(_slotSize_) {};
    ~ParkingSlot();

    std::pair<bool, std::string> parkVehicle(Vehicle *_vehicle)
    {
        if (_vehicle->getSlotSize() == slotSize_ && parkingStatus_ == ParkingStatus::EMPTY)
        {
            parkingStatus_ = ParkingStatus::PARKED;
            vehicle_ = _vehicle;
            return std::make_pair(true, slotNumber_);
        }
        else
        {
            return std::make_pair(false, "-1");
        }
    }

    bool unparkVehicle()
    {
        parkingStatus_ = ParkingStatus::EMPTY;
        vehicle_ = NULL;
    }

    std::string getSlotNum()
    {
        return slotNumber_;
    }

    SlotSize getSlotSize()
    {
        return slotSize_;
    }
};
