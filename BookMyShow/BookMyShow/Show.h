#include </home/tarun/LLD/BookMyShow/BookMyShow/Seat.h>
#include </home/tarun/LLD/BookMyShow/BookMyShow/Movie.h>
#include <string>
#include <vector>

class Show
{
public:
    std::string showId_;
    Movie movie_;
    std::vector<Seat> seats_;
    Show() = default;
    ~Show() = default;
};