#include <C:\Users\HalfVampire\Documents\LLD\ParkingLot\version2\Floor.h>
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
    ParkingLot(std::string _parkingId) {};
    ~ParkingLot();
};
