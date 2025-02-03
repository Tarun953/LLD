#include </home/tarun/LLD/BookMyShow/BookMyShow/Show.h>
#include <string>
#include <vector>

class Screen
{
public:
    std::string screenId_;
    std::string screenName_;
    int totalSeats_;
    std::vector<Show> shows_;

    Screen(/* args */);
    ~Screen();
};