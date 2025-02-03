#include </home/tarun/LLD/BookMyShow/enums/SeatType.h>
#include </home/tarun/LLD/BookMyShow/enums/SeatStatus.h>
#include <string>

class Seat
{
public:
    std::string seatId_;
    SeatType seatType_;
    SeatStatus seatStatus_;
    double price_;

    Seat() = default;
    ~Seat() = default;
};