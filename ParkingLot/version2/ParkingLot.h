#include <C:\Users\HalfVampire\Documents\LLD\ParkingLot\version2\Floor.h>
// #include <./Floor.h>
#include <vector>
#include <string>
#include <map>

class ParkingLot
{
private:
    std::string parkingId_;
    std::string parkingName_;
    std::string address_;
    std::vector<Floor> floors_;

public:
    // I am expecting the parking lot capacity vector stores the capacity of individual floors with their individual capacities
    ParkingLot(std::string _parkingId, std::string _parkingName, std::string _address, int _numFloors, std::vector<std::vector<int>> _floorCapacities) : parkingId_(_parkingId), parkingName_(_parkingName), address_(_address)
    {
        floors_.clear();
        for (int i = 0; i < _numFloors; i++)
        {
            std::vector<int> _tempCapacity = _floorCapacities[i];
            // Call the Floor constructor here
            // floors_.push_back(Floor())
        }
    };
    ~ParkingLot();
};
