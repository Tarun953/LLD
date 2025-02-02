#include <C:\Users\HalfVampire\Documents\LLD\ParkingLot\version2\ParkingSlot.h>
#include <C:\Users\HalfVampire\Documents\LLD\ParkingLot\version2\enums\ParkingStatus.h>
#include <C:\Users\HalfVampire\Documents\LLD\ParkingLot\version2\enums\SlotSize.h>
#include <C:\Users\HalfVampire\Documents\LLD\ParkingLot\version2\Vehicle.h>
#include <string>
#include <vector>
#include <map>
#include <set>

class Floor
{
private:
    std::string floorId_;
    std::string floorNum_;
    std::vector<ParkingSlot> parkingSlots_;
    std::map<SlotSize, std::set<int>> slotSizeToAvailableSlotIdMap_;
    std::map<int, int> slotIdToParkingSlotIndexMap_;

public:
    Floor(std::string _floorId, std::string _floorNum, std::vector<int> _capacity) : floorId_(_floorId), floorNum_(_floorNum)
    {
        parkingSlots_.clear();
        // Here we have to make sure that the capacity gives the how many number of SMALL, MEDIUM, LARGE Parking slots the floor has
        // i == 0 corresponds to SMALL
        // i == 1 corresponds to MEDIUM
        // i == 2 corresponds to LARGE
        int _slotId = 1;
        for (int i = 0; i < 3; i++)
        {
            int _val = _capacity[i];
            for (int j = 0; j < _val; j++)
            {
                if (i == 0)
                {
                    parkingSlots_.push_back(ParkingSlot(std::to_string(_slotId), std::to_string(_slotId), ParkingStatus::EMPTY, SlotSize::SMALL));
                    slotSizeToAvailableSlotIdMap_[SlotSize::SMALL].insert(_slotId);
                    slotIdToParkingSlotIndexMap_[_slotId] = (int)parkingSlots_.size();
                }
                else if (i == 1)
                {
                    parkingSlots_.push_back(ParkingSlot(std::to_string(_slotId), std::to_string(_slotId), ParkingStatus::EMPTY, SlotSize::MEDIUM));
                    slotSizeToAvailableSlotIdMap_[SlotSize::MEDIUM].insert(_slotId);
                    slotIdToParkingSlotIndexMap_[_slotId] = (int)parkingSlots_.size();
                }
                else
                {
                    parkingSlots_.push_back(ParkingSlot(std::to_string(_slotId), std::to_string(_slotId), ParkingStatus::EMPTY, SlotSize::LARGE));
                    slotSizeToAvailableSlotIdMap_[SlotSize::LARGE].insert(_slotId);
                    slotIdToParkingSlotIndexMap_[_slotId] = (int)parkingSlots_.size();
                }
                _slotId++;
            }
        }
    }
    ~Floor();

    // This will return true, floorNum, slotId
    std::pair<bool, std::pair<std::string, std::string>> parkVehicle(Vehicle *_vehicle)
    {
        SlotSize _slotSize = _vehicle->getSlotSize();
        if (!slotSizeToAvailableSlotIdMap_[_slotSize].empty())
        {
            auto _num = *slotSizeToAvailableSlotIdMap_[_slotSize].begin();
            auto _ind = slotIdToParkingSlotIndexMap_[_num];
            parkingSlots_[_ind].parkVehicle(_vehicle);
            slotSizeToAvailableSlotIdMap_[_slotSize].erase(*slotSizeToAvailableSlotIdMap_[_slotSize].begin());
            return std::make_pair(true, std::make_pair(floorNum_, std::to_string(_num)));
        }
        else
        {
            return std::make_pair(false, std::make_pair("", ""));
        }
    }

    bool unparkVehicle(std::string _slotId)
    {
        auto _ind = slotIdToParkingSlotIndexMap_[stoi(_slotId)];
        SlotSize _slotSize = parkingSlots_[_ind].getSlotSize();
        slotSizeToAvailableSlotIdMap_[_slotSize].insert(stoi(_slotId));
        parkingSlots_[_ind].unparkVehicle();
    }
};
