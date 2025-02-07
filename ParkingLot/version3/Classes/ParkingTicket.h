#include <C:\Users\HalfVampire\Documents\LLD\ParkingLot\version3\Interfaces\Vehicle.h>
#include <C:\Users\HalfVampire\Documents\LLD\ParkingLot\version3\Interfaces\ParkingSpot.h>
#include <string>

class ParkingTicket
{
private:
    std::string parkingTicketID_;
    Vehicle *vehicle_;
    ParkingSpot *parkingSpot_;
    std::string timestamp_;

public:
    ParkingTicket() = default;
    ParkingTicket(Vehicle *_vehicle, ParkingSpot *_parkingSpot)
    {
        parkingSpot_ = _parkingSpot;
        vehicle_ = _vehicle;
        parkingTicketID_ = 1;
        timestamp_ = "10/05/2020 09:30:05";
    }
    ~ParkingTicket() = default;
};