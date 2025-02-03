#include </home/tarun/LLD/BookMyShow/enums/BookingStatus.h>
#include </home/tarun/LLD/BookMyShow/BookMyShow/Show.h>
#include </home/tarun/LLD/BookMyShow/BookMyShow/Seat.h>
#include </home/tarun/LLD/BookMyShow/BookMyShow/Screen.h>
#include </home/tarun/LLD/BookMyShow/Payment/Payment.h>
#include <string>

class Booking
{
public:
    Booking() = default;
    ~Booking() = default;

    std::string bookingId_;
    BookingStatus bookingStatus_;
    Show show_;
    Screen screen_;
    std::vector<Seat> seats_;
    double amount_;
    Payment paymentObj_;

    bool makePayment(Payment _paymentObject)
    {
    }
};