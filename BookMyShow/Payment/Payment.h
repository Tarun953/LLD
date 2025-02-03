#include </home/tarun/LLD/BookMyShow/enums/PaymentStatus.h>
#include <string>

class Payment
{
public:
    Payment() = default;
    ~Payment() = default;

    std::string paymentId_;
    PaymentStatus paymentStatus_;
    double amount_;
};
